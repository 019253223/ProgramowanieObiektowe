using namespace std;
#include"komorka.h"

int komorka_int::_wartosc(string liczba) {

	this->wartosc = stoi(liczba);

return 0;
}

int komorka_string::_wartosc(string liczba) {

	this->wartosc = liczba;

return 0;
}
