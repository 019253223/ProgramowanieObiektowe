#ifndef _TABLICA_H
#define _TABLICA_H

class Tablica {

	int ilosc_wierszy;
	int ilosc_kolumn;
	int **arr;

public:


	Tablica();
	~Tablica();


/* metoda zapisująca wartości z pliku do komórek tablicy
 */

	int zapis_tablica ();

/* Metoda zapisująca wartości do pliku
 * @return Kod błędu lub 0 w przypadku powodzenia
 */

	int zapis_do_pliku ();

/* Metoda wyświetlająca tablicę
 */

	void wyswietlanie_tablica ();

/* Metoda wpisująca wartość do wybranej komórki
 * @parametr wartosc wpisana przez użytkownika wartosc, którą chce umieścić w komorce 
 * @return 
 */

	int ustaw_wartosc (int wartosc, int ktory_wiersz, int ktora_kolumna);

/* Metoda zmieniająca rozmiar tablicy
 * @parametr nowe_wiersze Nowa liczba wierszy
 * @parametr nowe_kolumny Nowa liczna kolumn
 * @return 
 */

	int zmien_rozmiar (int nowe_wiersze, int nowe_kolumny);

/* Metoda sumująca wartosci we wskazanej kolumnie
 * @parametr ktora_kolumna wpisany przez użytkownika numer kolumny;
 * @return Kod błędu lub 0 w przypadku powodzenia
 */

	int suma_kolumny (int ktora_kolumna);

/* Metoda sumująca wartosci we wskazanym wierszu
 * @parametr ktory_wiersz wpisany przez użytkownika numer wiersza;
 * @return Kod błędu lub 0 w przypadku powodzenia
 */

	int suma_wiersze (int ktory_wiersz);

/* Metoda znajdująca maksimum we wskazanej kolumnie
 * @parametr ktora_kolumna wpisany przez użytkownika numer kolumny;
 * @return Kod błędu lub 0 w przypadku powodzenia
 */

	int maksimum_kolumny (int ktora_kolumna);

/* Metoda znajdująca maksimum we wskazanym wierszu
 * @parametr ktory_wiersz wpisany przez użytkownika numer wiersza;
 * @return Kod błędu lub 0 w przypadku powodzenia
 */

	int maksimum_wiersze (int ktory_wiersz);

/* Metoda znajdująca minimum we wskazanej kolumnie
 * @parametr ktora_kolumna wpisany przez użytkownika numer kolumny;
 * @return Kod błędu lub 0 w przypadku powodzenia
 */

	int minimum_kolumny (int ktora_kolumna);

/* Metoda znajdująca minimum we wskazanym wierszu
 * @parametr ktory_wiersz wpisany przez użytkownika numer wiersza;
 * @return Kod błędu lub 0 w przypadku powodzenia
 */

	int minimum_wiersze (int ktory_wiersz);

/* Metoda licząca średnią we wskazanej kolumnie
 * @parametr ktora_kolumna wpisany przez użytkownika numer kolumny;
 * @return Kod błędu lub 0 w przypadku powodzenia
 */

	int srednia_kolumny (int ktora_kolumna);

/* Metoda licząca średnią we wskazanym wierszu
 * @parametr ktory_wiersz wpisany przez użytkownika numer wiersza;
 * @return Kod błędu lub 0 w przypadku powodzenia
 */

	int srednia_wiersze (int ktory_wiersz);

/* Metoda wyświetlająca konkretną komórkę wskazaną przez użytkownika
 * @parametr ktory_wiersz wpisany przez użytkownika numer wiersza;
 * @parametr ktora_kolumna wpisany przez użytkownika numer kolumny;
 * @return Kod błędu lub 0 w przypadku powodzenia
 */

	int wyswietl_komorke (int ktory_wiersz, int ktora_kolumna);
};

#endif
