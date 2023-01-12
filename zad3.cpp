#include <iostream>
using namespace std;

void zad3()
{
    int ile;
    cout << "Stewardzie, ile leci pasażerów?: ";
    cin >> ile;
    for (int i = 0; i < ile; i++)
    {
        cout << "Pasażer nr " << i+1 << " proszę zapiąć pasy!" << endl;
    }
    cout << "Skoro wszyscy zapięli pasy to lądujemy";
}
