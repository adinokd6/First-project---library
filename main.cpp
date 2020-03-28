#include <iostream>
#include <vector>
#include "baza.h"
#include "osoba.h"

using namespace std;



int z=0;
baza tab[100];
osoba tablica[100];


int main()
{

    int b,i,n;
    cout<<endl<<"Jaka operacje chcesz wykonac? Podaj numer\n[1].Dodaj do bazy\n[2].Wyswietl baze\n[3].Wypozycz ksiazke\n[4].Wyswietl baze osob i wypozyczonych ksiazek\n";
    cin>>b;
    switch(b)
    {
    case 1:
        {
          cout<<"Ile ksiazek chcesz wpsiac do bazy? Podaj liczbe: ";
          cin>>n;
            for(i=0;i<n;i++)
            {
                cout<<endl<<"Ksiazka numer: ["<<i+1<<"]\n";

                tab[i].wczytaj_dane_ksiazki();

            }
            return main();
        }
    case 2:
        {
            cout<<"\nW bazie znajduje sie "<<baza::w_bazie<<" pozycji.\n";
            for(i=0;i<tab[0].w_bazie;i++)
            {
                tab[i].wyswietl_dane_ksiazki();
                cout<<endl;
            }
            return main();
        }
    case 3:
        {
            tablica[z].wczytaj_dane_osoby();
            int x;
            cout<<endl;
            for(i=0;i<tab[0].w_bazie;i++)
            {

                tab[i].wyswietl_dane_ksiazki();
            }

            while(x!=0)
            {
                cout<<"\nPodaj indeks ksiazki ktora czytajcy chce wypozyczyc (Podanie zero oznacza wyjscie): ";
                cin>>x;
                if(x!=0)
                {
                    tablica[z].spis_ksiazek.push_back(tab[x-1]);
                }
                else
                    break;

            }
            z++;
            return main();

        }
    case 4:
        {
            cout<<"\nW bazie znajduje sie "<<osoba::l_osob<<" osob\n";
            for(i=0;i<z;i++)
            {
                tablica[i].wyswietl_dane_osoby();
                cout<<endl;
            }
            return main();
        }
    }
    return 0;

}

