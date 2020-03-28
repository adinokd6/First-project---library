#ifndef osoba_h
#define osoba_h

#include <iostream>
#include <vector>
#include "baza.h"

using namespace std;


class osoba :public baza
{
    private:
    string imie;
    string nazwisko;




    public:
    static int l_osob;
    static void ldod();
    vector <baza> spis_ksiazek;
    void wczytaj_dane_osoby();
    void wyswietl_dane_osoby();
    osoba();
    ~osoba();
};

#endif // osoba_h

