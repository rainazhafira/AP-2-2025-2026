#include <iostream>
using namespace std;

void  sapa(string nama) { // nama menerima "Alya" , nama adalah parameter formal
    cout<< "Hallo " << nama << " Selamat Datang di AP 2!" << endl;
}

int main () {
    string namaPengguna = "Alya";

    sapa(namaPengguna); // sapa(Alya), namaPengguna adalah parameter aktual

    return 0;
}