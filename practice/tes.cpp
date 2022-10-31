#include <iostream>

using namespace std;

int main () {
    int n = 7;
    int i;
    int total = 0;

    for (i=0; i<n; i++) {
        cout << i+1;

        if (i < n) {
            cout << "+";
        }
        else {
            cout << "=";
        }
        total = total + i+1;
    }

    cout << total;

    return 0;
}