h(1,S,E):-write(S),write("->"),write(E),nl.
h(N,S,E):-N>1,Other is 6-(S+E),M is N-1,h(M,S,Other),h(1,S,E),h(M,S,E).