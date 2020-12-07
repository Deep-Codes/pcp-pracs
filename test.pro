loop(M,M):-write("N is :"),write (M).
loop(N,M):-N\=M,write("N is : "),write(N),n1,N1 is N+1,loop(N1,M).
loop(M):-N=0,loop(N,M).