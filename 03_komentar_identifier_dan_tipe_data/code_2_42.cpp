#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[] = "Belajar Pemrograman C++.....";
    char str2[] = "Python";

    memmove(str1 + 20, str2, strlen(str2));

    cout << str1 << endl;

    return 0;
}
