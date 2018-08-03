%% program to simulate the animal foodchain

eats(zooplankton, phytoplankton).
eats(herring, zooplankton).
eats(harbour_seal, herring).

eats(ridgeia_worm, microbes).
eats(spider_crab, ridgeia_worm).
eats(octopus, spider_crab).

eats(mice, plants).
eats(snake, mice).
eats(hawk, snake).

%% normal rules

producers(Y) :-
	eats(zooplankton, Y);
	eats(ridgeia_worm, Y);
	eats(mice, Y).

primary_consumer(X) :-
	eats(X, phytoplankton),
	eats(herring, X);
	eats(X, microbes),
	eats(spider_crab, X);
	eats(X, plants),
	eats(snake, X).

secondary_consumer(Z) :-
	eats(Z, zooplankton),
	eats(harbour_seal, Z);
	eats(Z, ridgeia_worm),
	eats(octopus, Z);
	eats(Z, mice),
	eats(hawk, Z).

tertiary_consumer(B) :-
	eats(B, herring);
	eats(B, spider_crab);
	eats(B, snake).

%% recursive rules

predator(X,Y):- 
	eats(X,Y). 

predator(X,Y):- 
	eats(X,Z), 
	predator(Z,Y). 

in_food_chain(X,Y) :-
	eats(X,Y).

in_food_chain(X, Y) :-
	eats(X,Z),
	in_food_chain(Z,Y).

