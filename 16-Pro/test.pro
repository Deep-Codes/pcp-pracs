killer(butch).
married(mia,marsellus).
kills(marsellus,X):-gives(X,mia).
loves(mia,X):-gooddancer(X).
eats(jules,X):-nutricious(X);tasty(X).
nutricious(banana).
tasty(banana).

% ['/Users/deepankarbhade/Desktop/pcp-pracs/16-Pro/test.pro'].

% cmd
% eats(jules,X).
% killer(marsellus).

/*
?- ['/Users/deepankarbhade/Desktop/pcp-pracs/16-Pro/test.pro'].
true.

?- eats(jules,X).
X = banana ;
X = banana.

?- killer(marsellus).
false.
*/