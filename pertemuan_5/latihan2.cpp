#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> nama = {"nadia", "echa", "carlos", "ilham", "alan"};
    cout << "isi vector awal:" << endl;
    for (int i = 0; i < nama.size(); i++){
        cout << nama[i] << endl;
    }
    nama.push_back("houra");
    nama.pop_back();
    nama.erase(nama.begin() + 1);
    
    cout << "\nlsi vector setelah perubahan:" << endl;
    for (int i = 0; i < nama.size(); i++) {
        cout << nama[i] << endl;
    }
    cout << "\nJumlah data tersisa: " << nama.size() << endl;

    return 0;
}