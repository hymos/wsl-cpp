#include <iostream>
#include <limits>

using namespace std;

int main()
{
    //bilangan bulat
    int a;
    long b;
    short c;
    unsigned int x;
    unsigned long y;
    unsigned short z;

    //desimal
    float d;
    double e;
    long double n;

    //characater
    char f;

    //boolean
    bool g;

    cout << sizeof(a) << " byte" << endl;
    cout << sizeof(a)*8 << " bit" << endl;

    cout << numeric_limits<bool>::max() << endl;
    cout << numeric_limits<bool>::min() << endl;

    return 0;
}