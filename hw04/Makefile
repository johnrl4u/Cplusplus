all: main

main.o: main.cc HW4ArrayFlat.h
	g++ -c main.cc
	
HW4ArrayFlat.o: HW4ArrayFlat.cc HW4ArrayFlat.h
	g++ -c HW4ArrayFlat.cc
	
main:	HW4ArrayFlat.o main.o
	g++ -o main main.o HW4ArrayFlat.o