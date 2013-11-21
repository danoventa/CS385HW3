Assistant.o : Assistant.cpp Assistant.h
	g++ -c Assistant.cpp

ArgCheck.o : ArgCheck.cpp ArgCheck.h
	g++ -c ArgCheck.cpp

Operations.o : Operations.cpp Operations.h
	g++ -c Operations.cpp

main.o : main.cpp uberconnect.h Operations.h ArgCheck.h Assistant.h
	g++ -c main.cpp

orderSearcher : main.o Operations.o ArgCheck.o Assistant.o
	g++ -g Assistant.o ArgCheck.o Operations.o main.o -lm -o orderSearcher
