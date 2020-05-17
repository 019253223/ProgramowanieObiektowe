#include<iostream>
#include<cstdlib>
#include<stdio.h>
using namespace std;
#include"tablica.h"
#include"menu.h"


int main () {

  	int wybor,rozmiar,kolumny;
 	int **arkusz = new int * [rozmiar];

    
	petla_menu(arkusz, wybor, rozmiar, kolumny);


	for (int i = 0; i<rozmiar; i++) {
	    delete [] arkusz[i];
	    delete [] arkusz;
	}

return 0;
}
