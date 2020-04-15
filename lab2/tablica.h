#ifndef _TABLICA_H
#define _TABLICA_H

/* Funkcja zapisująca wartości do komórek tablicy
 * @parametr rozmiar Liczba wierszy tablicy
 * @parametr kolumny Liczba kolumn tablicy
 * @parametr arkusz Tablica dwuwymiarowa, do której będa zapisywane wartości
 * @return arkusz Tablica z wpisanymi wartościami
 */

int zapis_tablica (int rozmiar, int kolumny, int **arkusz);

/* Funkcja wyświetlająca tablicę
 * @parametr arkusz Tablica dwuwymiarowa z wpisanymi wartościami
 */

void wyswietlanie_tablica (int **arkusz);

/* Funkcja wpisująca wartość do wybranej komórki
 * @parametr rozmiar Liczba wierszy tablicy
 * @parametr kolumny Liczba kolumn tablicy
 * @parametr arkusz Tablica dwuwymiarowa, której komórkę chcemy zmienić 
 * @return arkusz Tablica z zaktualiowanymi wartościami
 */

int wpisz_zawartosc (int **arkusz, int rozmiar, int kolumny);

#endif
