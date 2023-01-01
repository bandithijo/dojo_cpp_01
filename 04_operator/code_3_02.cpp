#include <iostream>

using namespace std;

int main() {
    int a = 2, b = 3;
    int x = 10, y = 7;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    a += b; // a = a + b
    cout << "Setelah statemen a += b";
    cout << ", a: " << a << endl;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    x -= y; // x = x - y
    cout << "Setelah statemen x -= y";
    cout << ", x: " << x << endl;

    return 0;
}
