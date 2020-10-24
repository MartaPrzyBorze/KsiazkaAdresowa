#include <iostream>
#include <windows.h>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

struct Kontakt
{
    int id;
    string imie="", nazwisko="", numerTelefonu="", email="", adres="";
};

bool wczytajPlik(vector<Kontakt> &kontakty);
bool dodajKontakt(vector <Kontakt> &kontakty);
void wyszukajPoImieniu(vector <Kontakt> &kontakty);
void wyszukajPoNazwisku(vector <Kontakt> &kontakty);
void wypiszWszystkieKontakty(vector <Kontakt> &kontakty);
void edytujKontakt(vector <Kontakt> &kontakty);
bool usunKontakt(vector <Kontakt> &kontakty);
bool zapiszDoPliku(vector <Kontakt> &kontakty);


int main()
{
    vector <Kontakt> kontakty;
    char wybor;

    while (1)
    {
        system("cls");

        cout << "KSIAZKA ADRESOWA" << endl;
        cout << "1. Dodaj adresata" << endl;
        cout << "2. Wyszukaj po imieniu" << endl;
        cout << "3. Wyszukaj po nazwisku" << endl;
        cout << "4. Wyswietl wszystkich adresatow" << endl;
        cout << "5. Usun adresata" << endl;
        cout << "6. Edytuj adresata" << endl;
        cout << "9. Zakoncz program" << endl;
        cout << "Wybor: ";
        cin>>wybor;


        if (wybor == '1')
        {
            dodajKontakt(kontakty);
        }
        if (wybor == '2')
        {
            wyszukajPoImieniu(kontakty);
        }
        if (wybor == '3')
        {
            wyszukajPoNazwisku(kontakty);
        }
        if (wybor == '4')
        {
            wypiszWszystkieKontakty(kontakty);
        }
        if (wybor == '5')
        {
            edytujKontakt(kontakty);
        }
        if (wybor == '6')
        {
            usunKontakt(kontakty);
        }
        if (wybor == '9')
        {
            exit(0);
        }
    }

    return 0;
}

bool wczytajPlik(vector<Kontakt> &kontakty)
{
    cout<<"Wczytywanie pliku"<<endl;
    return true;
}

bool dodajKontakt(vector<Kontakt> &kontakty)
{
    cout<<"Dodawanie kontaktu"<<endl;
    return true;
}

void wyszukajPoImieniu(vector <Kontakt> &kontakty)
{
    cout<<"Imie"<<endl;
}

void wyszukajPoNazwisku(vector <Kontakt> &kontakty)
{
    cout<<"Nazwisko"<<endl;
}

void wypiszWszystkieKontakty(vector <Kontakt> &kontakty)
{
    cout<<"Wszystkie kontakty"<<endl;
}

void edytujKontakt(vector <Kontakt> &kontakty)
{
    cout<<"Kontakt do zedytowania"<<endl;
}

bool usunKontakt(vector<Kontakt> &kontakty)
{
    cout<<"kontakt usuniety"<<endl;
    return true;
}

bool zapiszDoPliku(vector<Kontakt> &kontakty)
{
    cout<<"Zapisywanie do pliku"<<endl;
    return true;
}