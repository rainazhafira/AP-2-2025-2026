#include <iostream>
using namespace std;

int main () {
    //goto label
    //hello world, Fasilkom TI, Ilmu Komputer, IKLC
    //=> hello world, IKLC , Ilmu Komputer, Fasilkom TI

    // a:
    //     cout << "hello world " << endl;
    //     goto d;

    // b:
    //     cout << "Fasilkom TI " << endl;
    //     return 0;

    // c: 
    //     cout << "Ilmu Komputer " << endl;
    //     goto b;

    // d: 
    //     cout << "iklc " << endl;
    //     goto c;


    // int i = 10;
    // genap :
    // if ( i % 2 == 0) {
    //     cout << i  << " ";
    // } i -- ;

    // if (i >= 2) {
    //     goto genap;
    // }


    //while akan terus berulang kalo nilai nya benar <cek kondiri lalu jalankan, tapi kalo kondisi ga terpenuhi gada output

    //<statement while>

    //int i = 1;
    //while  (i <=10) { // false kondisi i > 10
    // if (i % 2 == 0) {
    //    cout << i << " ";

    // } i ++;


    // }   

    //<statement-do-while> bisa run minimal 1, meskipun kondisinya salah => jalankan dulu perintahnya lalu cek kondisinya

        //int i = 1;
        //do {
        // cout << i << endl;   
        // } while (i <= 0); // 1 <= 0? false

    
    //<statement for>

    //<for> =>(inisialisasi , komdisi, increase)

//     for (int i = 1; i <= 10 ; i+=2) {
//        cout << "hello world " << endl;
//     }

    //<nested for>

    //***** 5 x 5

    //for ( int i = 1; i  <= 5; i++) {
    //for (int j =1; j <=5 ; j++) {
    //    cout << "*" ;

    // }
    //    cout << endl;
    // }

    //segitiga siku-siku
    // for ( int i = 1; i  <= 5; i++) {
    // for (int j =1; j <=i ; j++) {
    //    cout << "*  " ;

    // }
    //    cout << endl;
    // }   
 }