/*
Zadanie 4.3
--------------------------------------
Napisz program:
- pokazujący wykonanie tych samych operacji w c i c++ (kcpp02::34)
- nazwać program: ZadCandCPP.cc
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b;

    /* Styl C
    printf("Styl C - podaj dwie liczby calkowite: ");
    scanf("%d %d", &a, &b);
    printf("Suma w stylu C: %d\n", a + b);
    printf("Roznica w stylu C: %d\n", a - b);
    */

    cout << "\nC++ - podaj dwie liczby calkowite: ";
    cin >> a >> b;
    cout << "Suma w C++: " << (a + b) << endl;
    cout << "Roznica w C++: " << (a - b) << endl;

    /* Styl C - tablice
    int tab[5];
    printf("\nStyl C - wczytaj 5 liczb do tablicy:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &tab[i]);
    }
    printf("Tablica w stylu C: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    */

    int tab2[5];
    cout << "\nC++ - wczytaj 5 liczb do tablicy: ";
    for (int i = 0; i < 5; i++) {
        cin >> tab2[i];
    }
    cout << "Tablica w C++: ";
    for (int i = 0; i < 5; i++) {
        cout << tab2[i] << " ";
    }
    cout << endl;

    cout << "Nacisnij Enter, aby zakonczyc program...";
    cin.ignore();
    cin.get();

    return 0;
}