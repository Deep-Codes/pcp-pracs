loop(0):-write("N is: 0").
loop(N):-N>0,write("N is: "),write(N),X is N-1,loop(X).