#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vector declaration & initialization
    vector<string> nama_karyawan = {"alya", "parul", "hana", "dewi", "padhil"};
    
    // menampilkan data ascending
    // for(int i = o; i < nama_karyawan.size(); i++){
    // cout << nama_karyawan[i]<< endl;

    // add data to vector
    nama_karyawan.push_back("edric");

    // menampilkan data ascending
    // for(int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] <<< edl;
    // }

    // delete data from vector
    nama_karyawan.pop_back();
    nama_karyawan.erase(nama_karyawan.begin() + 3);

    for(int i = 0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i] << endl;
    }
    }
}
