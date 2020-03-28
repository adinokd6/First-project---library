#ifndef baza_h
#define baza_h

#include <iostream>
#include <vector>

using namespace std;

class baza
{
    private:
    string imie;
    string nazwisko;
    string tytul;
    int rok_wydania;
    int nr_wydania;
    int pozycja;


    public:
    static int w_bazie;
    static void dodaj();
    baza();
    ~baza();
    void wczytaj_dane_ksiazki();
    void wyswietl_dane_ksiazki();
};




#endif // klasy_hpp
