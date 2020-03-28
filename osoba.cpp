#include "osoba.h"
#include <iostream>
#include <vector>

using namespace std;

int osoba::l_osob=0;

void osoba::wczytaj_dane_osoby()
{
    cout<<"\nPodaj imie czytelnika: ";
    cin>>imie;
    cout<<"\nPodaj nazwisko czytelnika: ";
    cin>>nazwisko;
    ldod();
}


void osoba::wyswietl_dane_osoby()
{
    int i;
    cout<<"Imie: "<<imie<<" Nazwisko: "<<nazwisko<<endl;
    cout<<"Wypozyczone ksiazki:\n";
    for(i=0;i<spis_ksiazek.size();i++)
    {
        spis_ksiazek[i].wyswietl_dane_ksiazki();
        cout<<endl;
    }
    for(i=0;i<30;i++)
        {
            cout<<"*";
        }
    cout<<endl;
}

void osoba::ldod()
{
    l_osob++;
}

osoba::osoba()
{
    imie="Brak informacji";
    nazwisko="Brak informacji";
}
osoba::~osoba()
{

}
