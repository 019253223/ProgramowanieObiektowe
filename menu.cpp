#include<iostream>
using namespace std;
#include"menu.h"

int menu(int wybor) {

cout << "Co chcesz zrobic?"<<endl<<"Wybierz opcje z dostepnych ponizej i wpisz wybrany numer: ";
    cout<<endl<<endl;
    cout
    <<"1. Uzupelnij caly arkusz"<<endl
    <<"2. Wyswietl caly arkusz"<<endl
    <<"3. Wyswietl zawartosc komorki"<<endl
    <<"4. Wpisz wartosc do komorki"<<endl
    <<"5. Usun wartosc w komorce"<<endl
    <<"6. Dodawanie komorek"<<endl
    <<"7. Odejmowanie komorek"<<endl
    <<"8. Mnozenie komorek"<<endl
    //<<". Dzielenie komorek"<<endl
    <<"9. Zamiana komorek miejscami"<<endl
    <<"10. Wyjdz z programu"<<endl<<endl
    <<"Wybieram opcje numer: ";
    cin >> wybor;
    cout<<endl<<endl;

return wybor;}
