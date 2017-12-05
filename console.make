TEST	= projet.cpp function.cpp cours.cpp
FILES	= header.hpp $(TEST)

test:	$(FILES)
	g++ -Wall -std=c++11 -ansi -o $@ $(TEST) 
