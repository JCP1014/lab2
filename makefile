all: A.o a.o
	g++ -o A A.o a.h
A.o: A.cpp a.h
	g++ -c A.cpp
a.o: a.h
	g++ -c a.h
