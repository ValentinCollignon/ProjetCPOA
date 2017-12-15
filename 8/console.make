TEST	= proposer_cours.cpp function.cpp cours.cpp gestion_cours.cpp visu_cours.cpp

FILES	= cours.hpp $(TEST)

proposer_cours:	clean $(FILES)
	g++ -Wall -std=c++11 -ansi -o $@ $(TEST)
	g++ -Wall -std=c++11 -ansi menu.cpp -o menu
	g++ -Wall -std=c++11 -ansi utilisateur.cpp connexion.cpp -o connexion
	g++ -Wall -std=c++11 -ansi utilisateur.cpp inscription.cpp -o inscription
	g++ -Wall -std=c++11 -ansi cours.cpp visu_cours.cpp -o visu_cours
	g++ -Wall -std=c++11 -ansi cours.cpp gestion_cours.cpp -o gestion_cours

clean:
	rm -rf menu proposer_cours connexion inscription visu_cours gestion_cours

