using namespace std;
#include"komorka.h"

int komorka_int::wartosc_wczytana(string liczba) {

	wartosc = stoi(liczba);

return 0;
}

int komorka_int::zwrocona_int() {
return wartosc;
}

int komorka_string::wartosc_wczytana(string liczba) {

	wartosc = liczba;

return 0;
}

string komorka_string::zwrocona_string() {
return wartosc;
}

