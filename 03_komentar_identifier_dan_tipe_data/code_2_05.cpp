#include <iostream>

using namespace std;

const int MAX = 5;

int main() {
    int A[MAX];

    for (int C = 0; C < 5; C++) {
        // mengisi nilai ke dalam A[C]
        A[C] = C * 10;

        // menampilkan nilai A[C]
        cout << A[C] << endl;
    }

    return 0;
}
