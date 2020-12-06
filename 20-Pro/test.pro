animal(lion).
animal(tiger).
animal(cow).
carnivore(lion).
carnivore(tiger).
eat(cow,grass).
eat(X,Y):-carnivore(X),animal(Y).

Cmd: 

?- eat(grass,lion).
false.

?- eat(tiger,cow).
true.