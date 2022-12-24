#include <iostream>

using namespace std;

int main() {
    int A[5];

    for(int C = 0; C < 5; C++) {
        // mengisi nilai ke dalam A[C]
        A[C] = C * 10;

        // menampilkan nilai A[C]
        cout << A[C] << endl;
    }

    return 0;
}
