#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[] = "setiap programmer C++ mengetahui memset()";

    memset(str, '*', 6);

    cout << str << endl;

    return 0;
}
