#include <iostream>
using namespace std;

int main () {
    int nilai;

    system("cls");
    cout << "masukan nilai : ";
    cin >> nilai;

    //if statement 
    //if (nilai <=65 ){
    //     cout << "anda tidak lulus";
    // }

    //if else statement 
    // if (nilai <=65 ){
    //     cout << "anda tidak lulus";
    // }
    //else {
    //     cout << "anda lulus"<< endl;
    //}

    //if else if statement 
//    if (nilai <=65 ){
//          cout << "anda tidak lulus";
//     }
//      else{

//         if (nilai ==100 ){
//              cout << "Anda lulus dan anda hebat";
//     }
//         else {
//             cout << "anda lulus"<< endl;
//     }


//switch case 
// switch  (nilai){
//     case 1:
//         cout << "senin" << endl;
//         break;
//     case 2:
//         cout << "selasa" << endl;
//         break;
//     case 3:
//         cout << "rabu" << endl;
//         break;
//     case 4:
//         cout << "kamis" << endl;
//         break;
//     case 5:
//         cout << "jumat" << endl;
//         break;
//     case 6:
//         cout << "sabtu" << endl;
//         break;
//     case 7:
//         cout << "minggu" << endl;
//         break;
//     default:
//         cout <<  "inputan salah" << endl;
//         break;
  
//}

// switch (nilai){
//     case 85 ... 100 : cout << "Nilai a " << endl;
    
       
//}

//<ternary operator> 
//if (nilai % 2 == 0){
//     cout << "nilai genap " << endl;
//}
//else {
//     cout << "nilai Ganjil " << endl;

//}

(nilai % 2 == 0) ? cout << "nilai genap" << endl: cout << "nilai ganjil" << endl;
}