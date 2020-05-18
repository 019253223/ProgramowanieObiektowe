#ifndef _TABLICA_H
#define _TABLICA_H

struct Tablica {
	int **arkusz;
	int ilosc_wierszy;
	int ilosc_kolumn;
};

/* Funkcja zapisująca wartości do komórek tablicy
 * @parametr *arr Struktura, która przechowuje tablicę dynamiczną, ilość wierszy i kolumn;
 * @return **arr->arkusz Tablica z wpisanymi wartościami
 */

int zapis_tablica (Tablica *arr);

/* Funkcja zapisująca wartości do pliku
 * @parametr *arr Struktura, która przechowuje tablicę dynamiczną, ilość wierszy i kolumn;
 * @return Kod błędu lub 0 w przypadku powodzenia
 */

int zapis_do_pliku (Tablica *arr);

/* Funkcja wyświetlająca tablicę
 * @parametr arr Struktura, która przechowuje tablicę dynamiczną, ilość wierszy i kolumn;
 */

void wyswietlanie_tablica (Tablica arr);

/* Funkcja wpisująca wartość do wybranej komórki
 * @parametr arr Struktura, która przechowuje tablicę dynamiczną, ilość wierszy i kolumn;
 * @parametr wartosc wpisana przez użytkownika wartosc, którą chce umieścić w komorce 
 * @return **arr->arkusz Tablica z zaktualiowanymi wartościami
 */

int ustaw_wartosc (Tablica arr, int wartosc);

/* Funkcja zmieniająca rozmiar tablicy
 * @parametr arr Struktura, która przechowuje tablicę dynamiczną, ilość wierszy i kolumn;
 * @parametr nowe_wiersze Nowa liczba wierszy
 * @parametr nowe_kolumny Nowa liczna kolumn
 * @return **arr->arkusz Tablica z zaktualiowanymi wartościami
 */

int zmien_rozmiar (Tablica arr, int nowe_wiersze, int nowe_kolumny);

/* Funkcja sumująca wartosci we wskazanej kolumnie
 * @parametr arr Struktura, która przechowuje tablicę dynamiczną, ilość wierszy i kolumn;
 * @parametr ktora_kolumna wpisany przez użytkownika numer kolumny;
 * @return Kod błędu lub 0 w przypadku powodzenia
 */

int suma_kolumny (Tablica arr, int ktora_kolumna);

/* Funkcja sumująca wartosci we wskazanym wierszu
 * @parametr arr Struktura, która przechowuje tablicę dynamiczną, ilość wierszy i kolumn;
 * @parametr ktory_wiersz wpisany przez użytkownika numer wiersza;
 * @return Kod błędu lub 0 w przypadku powodzenia
 */

int suma_wiersze (Tablica arr, int ktory_wiersz);

#endif
