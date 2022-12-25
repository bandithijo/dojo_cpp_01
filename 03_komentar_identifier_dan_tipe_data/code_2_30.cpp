#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char *S = (char*) "Pemrograman C++";
    char *PStr;

    // melakukan pencarian karakter '+' di dalam variabel S
    PStr = strchr(S, 'C');

    // menampilkan nilai dari variabel PStr
    cout << PStr << endl;

    return 0;
}
