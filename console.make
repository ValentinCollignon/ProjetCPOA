TEST	= projet.cpp function.cpp 
FILES	= header.hpp $(TEST)

test:	$(FILES)
	g++ -Wall -std=c++11 -ansi -o $@ $(TEST) 