TEST	= proposer_cours.cpp function.cpp cours.cpp

FILES	= header.hpp $(TEST)

proposer_cours:	$(FILES)
	g++ -Wall -std=c++11 -ansi -o $@ $(TEST)
	g++ -Wall -std=c++11 -ansi menu.cpp -o menu
