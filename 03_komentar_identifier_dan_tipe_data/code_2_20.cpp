#include <iostream>
#include <cstring>

using namespace std;

// mendefinisikan tipe JENIS_KELAMIN
enum JENIS_KELAMIN { Pria, Wanita };

int main() {

    struct SISWA {
        char NIS[9];
        char Nama[25];
        JENIS_KELAMIN gender;
    } A;

    strcpy(A.NIS, "10899999");
    strcpy(A.Nama, "Dewi Aulia");
    A.gender = Wanita;

    cout << "NIS    : " << A.NIS << endl;
    cout << "Nama   : " << A.Nama << endl;
    cout << "Gender : " << A.gender << endl;

    return 0;
}
