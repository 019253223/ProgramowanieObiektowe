#ifndef _MENU_H
#define _MENU_H

/* Funkcja wyświetlająca menu i pytająca użytkownika, który nr wybiera
 */

void drukuj_menu();

/* Funkcja zapisująca wybór użytkownika
 * @parametr wybor Pobranie wyboru od użytkownika poprzez wpisanie z klawiatury 		   wybranej liczby z listy
 * @return wybor Zwraca pobraną od użytkownika liczbę
 */

int pobierz_wybor (int wybor);

/* Funkcja wykonująca wybraną przez użytkownika opcję
 * @parametr wybor Pobrany od użytkownika wybor
 * @parametr **arkusz Tablica dwuwymiarowa, której zawartość będzie 			      aktualizowana poprzez inne funkcje
 * @parametr ilosc_wierszy liczba wierszy tablicy
 * @parametr ilosc_kolumn liczba kolumn tablicy
 * @return Kod błędu lub 0 w przypadku powodzenia
 */

int wykonaj_wybor(int wybor, int **arkusz, int *ilosc_wierszy, int *ilosc_kolumn);

/* Funkcja wyświetlająca menu w nieskończonej pętli i wyświetlająca rezultat    funkcji wykonaj_wybor
 * @parametr **arkusz Tablica dwuwymiarowa, którą funkcje wykorzystują przy 			      realizacji polecenia
 * @parametr wybor Pobrany od użytkownika wybor
 * @parametr ilosc_wierszy liczba wierszy tablicy
 * @parametr ilosc_kolumn liczba kolumn tablicy
 */

void petla_menu(int **arkusz, int wybor, int ilosc_wierszy, int ilosc_kolumn);

#endif
