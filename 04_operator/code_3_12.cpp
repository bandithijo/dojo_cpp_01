#include <iostream>

using namespace std;

int main() {
    // mendelarasikan variabel boolean
    bool benar = true, salah = false;

    cout << "true  && true  = " << (benar && benar) << endl;
    cout << "true  && false = " << (benar && salah) << endl;
    cout << "false && false = " << (salah && salah) << endl;
    cout << "false && true  = " << (salah && benar) << endl;

    return 0;
}
