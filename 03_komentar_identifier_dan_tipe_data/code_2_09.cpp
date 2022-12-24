#include <iostream>

using namespace std;

// membuat fungsi test()
void test() {
    int A; // A bersifat lokal dan hanya dikenal oleh fungsi test()

    A = 20;
    cout << "Nilai A di dalam fungsi test(): " << A << endl;
}

// membuat fungsi main() atau fungsi utama
int main() {
    // A tidak dapat digunakan oleh fungsi main()
    // A = 10; // SALAH
    // cout << "Nilai A di dalam fungsi main(): " << A << endl;

    // memangil fungsi test()
    test();

    return 0;
}
