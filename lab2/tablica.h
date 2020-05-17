#ifndef _TABLICA_H
#define _TABLICA_H

/* Funkcja zapisująca wartości do komórek tablicy
 * @parametr ilosc_wierszy Liczba wierszy tablicy
 * @parametr ilosc_kolumn Liczba kolumn tablicy
 * @parametr arkusz Tablica dwuwymiarowa, do której będa zapisywane wartości
 * @return arkusz Tablica z wpisanymi wartościami
 */

int zapis_tablica (int ilosc_wierszy, int ilosc_kolumn, int **arkusz);

int zapis_do_pliku (int ilosc_wierszy, int ilosc_kolumn, int **arkusz);

/* Funkcja wyświetlająca tablicę
 * @parametr arkusz Tablica dwuwymiarowa z wpisanymi wartościami
 */


void wyswietlanie_tablica (int **arkusz);

/* Funkcja wpisująca wartość do wybranej komórki
 * @parametr ilosc_wierszy Liczba wierszy tablicy
 * @parametr ilosc_kolumn Liczba kolumn tablicy
 * @parametr arkusz Tablica dwuwymiarowa, której komórkę chcemy zmienić 
 * @return arkusz Tablica z zaktualiowanymi wartościami
 */

int ustaw_wartosc (int **arkusz, int ilosc_wierszy, int ilosc_kolumn, int wartosc);

/* Funkcja zmieniająca rozmiar tablicy
 * @parametr arkusz Tablica dwuwymiarowa
 * @parametr ilosc_wierszy Stara liczba wierszy tablicy
 * @parametr ilosc_kolumn Stara liczba kolumn tablicy
 * @parametr nowe_wiersze Nowa liczba wierszy
 * @parametr nowe_kolumny Nowa liczna kolumn
 */

int zmien_rozmiar (int **arkusz, int ilosc_wierszy, int ilosc_kolumn, int nowe_wiersze, int nowe_kolumny);

#endif
