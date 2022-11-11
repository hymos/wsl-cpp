/*
    Nama    : Almaas Izdihar Sant
    NIM     : 4611422076
*/

#include <iostream>

using namespace std;

int pangkat (int x, int y)
{
    if (y == 1)
    {
        return x;
    }
    return x * pangkat(x, y-1);
}

int main ()
{
    int x, y;
    cin >> x;
    cin >> y;
    cout << pangkat(x, y) << endl;

    return 0;
}

