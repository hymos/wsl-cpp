#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   int n, nilai[10], m;
   float med;

    cout << "masukkan banyaknya data: ";
    cin >> n;
    // input data
    for (int i=0; i<n; i++)
    {
        cout << "masukkan data ke-" << i << ": ";
        cin >> nilai[i];
    }
    //perhitungan median
    for (int i=0; i<n; i++)
    {
        if (n%2!=0)
        {
            m = n/2;
            med = nilai[m];
            
        }
        if (n%2==0)
        {
            m = n/2;
            med = (nilai[m-1]+nilai[m]);
            med = med/2;
        }
    }
    cout << "median = " << med;

}
