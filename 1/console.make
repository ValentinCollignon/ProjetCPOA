TEST	= menu.cpp

FILES	= menu.hpp $(TEST)
DOX_FL = ../Doxyfile
DOC_FL = $(FILES)  $(DOX_FL)

menu:	$(FILES)
	g++ -Wall -std=c++11 -ansi -o $@ $(TEST)
	g++ -Wall -std=c++11 -ansi menu.cpp -o menu
	
# pour générer la documentation
doc:	$(DOC_FL)
	doxygen $(DOX_FL)