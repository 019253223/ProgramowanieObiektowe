#include"tablica.h"

#ifndef _MENU_H
#define _MENU_H


/* Funkcja wyświetlająca menu i pytająca użytkownika, który nr wybiera
 */

void drukuj_menu();

/* Funkcja zapisująca wybór użytkownika
 * @parametr wybor Pobranie wyboru od użytkownika poprzez wpisanie z klawiatury wybranej liczby z listy
 * @return wybor Zwraca pobraną od użytkownika liczbę
 */

int pobierz_wybor (int wybor);

/* Funkcja wykonująca wybraną przez użytkownika opcję
 * @parametr wybor Pobrany od użytkownika wybor
 * @parametr arr Struktura, która przechowuje tablicę dynamiczną, ilość wierszy i kolumn;
 * @return Kod błędu lub 0 w przypadku powodzenia
 */

int wykonaj_wybor(int wybor, Tablica *tab);

/* Funkcja wyświetlająca menu w nieskończonej pętli i wyświetlająca rezultat    funkcji wykonaj_wybor
 * @parametr arr Struktura, która przechowuje tablicę dynamiczną, ilość wierszy i kolumn;
 * @parametr wybor Pobrany od użytkownika wybor
 */

void petla_menu(Tablica tab, int wybor);

#endif
