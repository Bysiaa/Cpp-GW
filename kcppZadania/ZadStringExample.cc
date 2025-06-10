/*
Zadanie podczas zajec
   *   Napisz funkcje (osobny program) w ktorym zadeklarujesz string i uzyjesz
   * na nim funkcji manipulacyjnych:
   *   1. empty()     Zwraca wartosc true jezeli napis jest pusty.
   *   2. size(),length()     Zwraca ilosc znakow w napisie.
   *   3. at()     Zwraca znak o podanym polozeniu, tak jak operator [], z tym
   * ze ta metoda jest bezpieczniejsza - wyrzuca wyjatek w przypadku wyjscia
   * poza zakres stringa.
   *   4. clear()     Usuwa wszystkie znaki z napisu.
   *   5. erase(...)     Usuwa wybrane znaki.
   *   6. find(...)     Znajduje podciag w ciagu, sa tez bardziej rozbudowane
   * funkcje tego typu.
   *   7. swap(...)     Zamienia miejscami dwa stringi, a staje sie b, a b staje
   * sie a.
   *   8. substr(...)     Zwraca podciag na podstawie indeksu poczatkowego i
   * dlugosci podciagu.
   *   9. append(...)
*/

#include <iostream>
using namespace std;

int main()
{
    string napis1 = "Ala ma kota";
    string tekst1 = "kot ma Ale";

    cout << "Twoj string nr 1 to: " << napis1 << endl;
    cout << "Twoj string nr 2 to: " << tekst1 << endl;

    cout << "Czy string jest pusty? " << (napis1.empty() ? "Tak" : "Nie") << endl;
    cout << "Rozmiar stringu: " << napis1.size() << endl;
    cout << "Dlugosc stringu: " << napis1.length() << endl;
    cout << "Znak na 2 miejscu: " << napis1.at(2) << endl;
    cout << "Ciag znakow 'kot' na miejscu: " << napis1.find("kot") << endl;

    napis1.append(" + dodany tekst");
    cout << "Dodany napis ' + dodany tekst'" << napis1 << endl;

    napis1.swap(tekst1);
    cout << "Zamiana napisow: " << napis1 << " <-> " << tekst1 << endl;

    cout << "Zwraca podciag zaczynajacy sie na indeksie 2 o dlugosci 4: " << napis1.substr(2, 4) << endl;

    napis1.erase(5);
    cout << "Usuwanie od 5 znaku: " << napis1 << endl;

    napis1.clear();
    cout << "Usuwanie wszystkich znakow: " << napis1 << endl;

    return 0;
}