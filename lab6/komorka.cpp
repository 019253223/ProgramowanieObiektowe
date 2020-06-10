using namespace std;
#include"komorka.h"

int komorka_int::wartosc_zwracana(string liczba) {

	wartosc = stoi(liczba);

return wartosc;
}

int komorka_string::wartosc_zwracana(string liczba) {

	wartosc = liczba;

return wartosc;
}
