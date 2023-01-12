#include <iostream>
#include "zad1.cpp"
#include "zad2.cpp"
#include "zad3.cpp"
using namespace std;

int main()
{
    int zad;
    do
    {
        cout << "Wpisz numer zadania: ";
        cin >> zad;
        switch (zad)
        {
        case 1:
            zad1();
            break;
        case 2:
            zad2();
            break;
        case 3:
            zad3();
            break;
        default:
            cout << "Takie zadanie nie istnieje!!!" << endl;
            zad = 0;
            break;
        }
    }
    while (zad == 0);

    return 0;
}
