TEST	= proposer_cours.cpp function.cpp cours.cpp 

FILES	= cours.hpp  $(TEST)

DOX_FL = ../Doxyfile
DOC_FL = $(FILES)  $(DOX_FL)

proposer_cours:	clean $(FILES)
	g++ -Wall -std=c++11 -ansi -o $@ $(TEST)
	g++ -Wall -std=c++11 -ansi menu.cpp -o menu

clean:
	rm -rf menu proposer_cours

# pour générer la documentation
doc:	$(DOC_FL)
	doxygen $(DOX_FL)

