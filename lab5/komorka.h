#ifndef _KOMORKA_H
#define _KOMORKA_H
#include<string>
#include<iostream>

class komorka {

public:

	virtual int _wartosc(string liczba) = 0;
};


class komorka_int : public komorka {

private: 
	int wartosc;

public:
	int _wartosc(string liczba);

};


class komorka_string : public komorka {

private: 
	string wartosc;

public:
	int _wartosc(string liczba); 

};


#endif
