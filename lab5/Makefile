program: main.o menu.o tablica.o komorka.o
	g++ -o program main.o menu.o tablica.o komorka.o

main.o: main.cpp tablica.h menu.h
	g++ -c main.cpp

menu.o: menu.cpp menu.h tablica.h
	g++ -c menu.cpp

tablica.o: tablica.cpp tablica.h
	g++ -c tablica.cpp

komorka.o: komorka.cpp komorka.h
	g++ -c komorka.cpp 


