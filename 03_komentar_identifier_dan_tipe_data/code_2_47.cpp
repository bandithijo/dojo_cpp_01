#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[] = "C,C++,Java,Python,Ruby";
    char *pch;

    cout << "Bahasa pemgrograman: " << endl;
    pch = strtok(str, ","); // pembatas berupa koma
    while (pch != NULL) {
        cout << pch << endl;
        pch = strtok(NULL, ",");
    }

    return 0;
}
