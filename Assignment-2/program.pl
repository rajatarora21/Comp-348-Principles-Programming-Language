female(pam).
female(liz).
female(pat).
female(ann).

male(jim).
male(bob).
male(tom).
male(:-).

parent(pam,bob).
parent(tom,bob).
parent(tom,liz).
parent(bob,ann).
parent(bob,pat).
parent(pat,jim).
parent(bob,peter).
parent(peter,jim).

mother(X,Y) :-parent(X,Y) ; female(X).
father(X,Y) :-parent(X,Y),male(X).
haschild(X) :-parent(X, _).
brother(X,Y) :-parent(Z,X),parent(Z,Y),female(X),female(Y), X\==Y .
sister(X,Y) :- parent(Z,X),parent(Z,Y),male(X),male(Y), X\==Y .
grandparent(X,Y) :-parent(X,Z),parent(Z,Y).
grandmother(X,Y):-grandparent(X,Y),female(X).
max(X,Y,X):- X>=Y.
max(X,Y,Y):- X<Y.
list_member(X,[X | _]).

