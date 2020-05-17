#include<iostream>
#include<cstdlib>
#include<stdio.h>
using namespace std;
#include"tablica.h"
#include"menu.h"


int main () {

  	int wybor;
	int ilosc_wierszy = 100 ;
	int ilosc_kolumn = 100 ;
 	int **arkusz = new int * [ilosc_wierszy];
	
	for (int i = 0; i < ilosc_wierszy; i++) {
	     arkusz[i] = new int [ilosc_kolumn];
	}

	 
    	/* cout << "zarezerwowano: " << ilosc_wierszy << endl;
	cout<< "sizeof: " << sizeof(arkusz) << endl; */

	petla_menu(arkusz, wybor, ilosc_wierszy, ilosc_kolumn);
	

	for (int i = 0; i < ilosc_wierszy; i++) {
	    delete [] arkusz[i];	    
	}
	    delete [] arkusz;

return 0;
}
