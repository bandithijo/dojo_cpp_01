#include <iostream>
#include <ostream>

using namespace std;

int main() {
    int C; // mendekalarasikan variabel C

    // mengisikan nilai ke dalam variabel C dengan nilai 5
    C = 5;

    // melakukan pre-increment
    cout << "Nilai C awal    : " << C << endl;
    cout << "Nilai ++C       : " << ++C << endl;
    cout << "Nilai C akhir   : " << C << endl;

    // mengubah nilai yang terdapat dalam variabel C dengan nilai 10
    C = 10;

    // melakukan post-increment
    cout << "Nilai C awal    : " << C << endl;
    cout << "Nilai C++       : " << C++ << endl;
    cout << "Nilai C akhir   : " << C << endl;

    return 0;
}
