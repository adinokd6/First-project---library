#include "baza.h"
#include <iostream>
#include <vector>

using namespace std;

int baza::w_bazie=0;

void baza::wczytaj_dane_ksiazki()
{
    cout<<"Podaj imie autora: ";
    cin>>imie;
    cout<<endl<<"Podaj nazwisko autora: ";
    cin>>nazwisko;
    cout<<endl<<"Podaj tytul ksiazki: ";
    cin>>tytul;
    cout<<endl<<"Podaj rok wydania: ";
    cin>>rok_wydania;
    cout<<endl<<"Podaj numer wydania: ";
    cin>>nr_wydania;
    dodaj();
    pozycja=w_bazie;

}

void baza::wyswietl_dane_ksiazki()
{
        cout<<endl<<endl<<"Pozycja numer ["<<pozycja<<"]"<<endl;
        cout<<"Imie i nazwisko autora: "<<imie<<" "<<nazwisko<<endl;
        cout<<"Tytul: "<<tytul<<endl;
        cout<<"Rok wydania: "<<rok_wydania<<endl;
        cout<<"Numer wydania: "<<nr_wydania<<endl;

}

void baza::dodaj()
{
    w_bazie++;
}

baza::baza()
{
    imie="Brak informacji";
    nazwisko="Brak informacji";
    tytul="Brak informacji";
    rok_wydania=0;
    nr_wydania=0;
}
baza::~baza()
{

}








