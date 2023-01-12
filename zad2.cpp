#include <iostream>
using namespace std;

void zad2()
{
    char l;
    cout << "Aby zakonczyć wpisz: K" << endl;
    do
    {
        cout << "Napisz jakąś literę: ";
        cin >> l;
        cout << "Napisałeś: " << l << endl;
    }
    while(l != 'K');
    cout << "Skoro napisałes K to kończymy!";
}
