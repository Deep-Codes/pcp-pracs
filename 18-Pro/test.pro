wizard(ron).
hasWand(harry).
quidditch(harry).
wizard(X):-hasWand(X),hasBroom(X).
hasBroom(X):-quidditch(X).


/*
?- ['/Users/deepankarbhade/Desktop/pcp-pracs/18-Pro/test.pro'].
true.


?- wizard(harry).
true.

?- quidditch(ron).
false.
*/