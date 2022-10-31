#include <iostream>

using namespace std;

int main () {
    int jmlPedangang = 0;
    cin >> jmlPedangang;

    int pedagang[jmlPedangang];

    for (int i = 0; i < jmlPedangang; i++) {
        cin >> pedagang[i];
    }

    //cek nilai terbesar
    int max = pedagang[0];
    for (int i = 0; i < jmlPedangang -1 ; i++) {
        if (pedagang[i] < pedagang[i+1]) max = pedagang[i+1];
    }

    //cek KPK
    int j = 0;
    int m = max;
    while (j < jmlPedangang) {
        if (m % pedagang[j] == 0) {
            j++;
        } else {
            j = 0;
            m = m + max;
        }
    }

    cout << m << endl;

    return 0;
} 