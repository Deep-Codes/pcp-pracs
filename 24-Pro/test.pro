/*Display Numbers from 0 to N*/
loop(M,M):-write("N is: "),write(M).
loop(N,M):-N\=M,write("N is: "),write(N),N1 is N+1,loop(N1,M).
loop(M):-N=0,loop(N,M).

