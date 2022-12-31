#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[] = "TEKS";
    char str2[] = "teks";
    char str3[] = "teks";

    int n1, n2, n3;

    n1 = memcmp(str1, str2, sizeof(str1));
    n2 = memcmp(str2, str3, sizeof(str2));
    n3 = memcmp(str3, str1, sizeof(str2));

    cout << "n1: " << n1 << endl;
    cout << "n2: " << n2 << endl;
    cout << "n3: " << n3 << endl;

    return 0;
}
