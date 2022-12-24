#include <iostream>

using namespace std;

int A; // variabel A adalah variabel global karena dideklarasikan di luar fungsi main()

// membuat fungsi test()
void test() {
    // mengisikan (assign) nilai ke dalam variabel A
    A = 20;
    cout << "Nilai A di dalam fungsi test(): " << A << endl;
}

// membuat fungsi main() atau fungsi utama
int main() {
    // mengisikan (assign) nilai ke dalam variabel A
    A = 10;
    cout << "Nilai A di dalam fungsi main(): " << A << endl;

    // memanggil fungsi test()
    test();

    return 0;
}
