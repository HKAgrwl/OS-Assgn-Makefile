main : main.o p1 p2
	g++ p1.o p2.o main.o

main.o : main.cpp
	g++ -c main.cpp -o main.o

p1 : p1.cpp
	g++ -c p1.cpp -o p1.o

p2 : p2.cpp
	g++ -c p2.cpp -o p2.o

clean : 
	rm -f main p1 p2

