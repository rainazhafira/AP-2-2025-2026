#include <iostream>
using namespace std;

int main() {
    int a,b;
    system("cls");

    //assignment operator, " = ", memberi nilai ke suatu variabel
    a = 3;
    b = 5;

    //aritmatikal operator, untuk operasi matematika 
    //int tambah = a + b;
    //int kurang = a - b;
    //int kali   = a * b;
    //float bagi = a / b;
    //float bagi = (float) a/ (float)b; //type casting ubah tipe data dengan paksa
    //int modulo = a % b;

    //cout << "hasil penjumalahn : " << tambah << endl;
    //cout << "hasil pengurangan : " << kurang << endl;
    //cout << "hasil perkalian : " << kali << endl;
    //cout << "hasil pembagian : " << bagi << endl;
    //cout << "hasil sisa bagi  : " << modulo << endl;

    //relational operator, membandingkan 2 nilai dari 2 operand. hasil berupa boolean yaitu 0/1 true & false
    //cout << (a == b) << endl;
    //cout << ( a < b) << endl;
    //cout << (a != b) << endl;

    //logical operator (&&,||, !!) membandingkan 2 nilai variabel bertipe boolean
    //cout << (true && true ) << endl;
    //cout << (true & false) << endl;

    // cout << (true || false) << endl;
    // cout << (false || false) << endl;

    // cout << !true  << endl;
    // cout << !false << endl;

    //bitwise opertaor ntuk operasi biner (&, |, ^, ~, >>, <<)
    //cout << ( 5 & 7 ) << endl;
    //cout << ( 5 | 7 ) << endl;
    //cout << ( 5 ^ 7 ) << endl;
    //cout << (~7) << endl;
    //cout << ( 7 << 2 ) << endl;
    //cout << ( 7 >> 2 ) << endl;


    //operator kondisional (?), ternary, kondisi => hasil 1? hasil 2

    //int max ;
    //max = (a > b) ? a : b;
    //cout << "nilai terbesar : " << max << endl;

    //increment , decrement 
    //pre increment ++ ada depan variabel 
    //cout<< a << endl; //3
    //cout<< ++a << endl; // ++3 =4

    //post increment ++ ada belakang variabel 
    //cout << a << endl; //3
    //cout << a++ << endl; // 3+1
    //cout<< a << endl; //4

    //pre decrement, -- ada depan variabel
    cout << b << endl;
    cout << b-- << endl;
    cout << b << endl;
}