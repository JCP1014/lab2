all: A.o a.o
	g++ -o A A.o a.o

a.o: a.cpp a.h
	g++ -c a.cpp

A.o: A.cpp a.h
	g++ -c A.cpp

clean:
	rm a *.o
