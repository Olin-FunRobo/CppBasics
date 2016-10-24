all : lib.a main.o

lib.a: lib.cpp
	g++ -c lib.cpp -o lib.o
	ar rvs lib.a lib.o

main.o: main.cpp lib.a
	g++ main.cpp lib.a -o main.o
