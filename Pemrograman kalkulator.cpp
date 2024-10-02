#include <iostream>
using namespace std;

int main() {
    char operasi;
    float angka1, angka2, hasil;
    
    //input dua angka dari pengguna
    cout <<"Masukkan angka pertama: ";
    cin >> angka1;
    cout <<"Masukkan angka kedua: ";
    cin >> angka2;
    
    //memilih operasi yang diinginkan
    cout <<"Pilih operasi (+,-,*,/): ";
    cin>> operasi;
    
    //melakukan ooperasi yang sesuai dengan input pengguna
    switch (operasi){
           case '+':
                hasil = angka1 + angka2;
                cout<< "hasil: " << angka1 << " + " << angka2 <<" = " << hasil << endl;
                break;
           case '-':
                hasil = angka1 - angka2;
                cout<< "hasil: " << angka1 << " - " << angka2 <<" = " << hasil << endl;
                break;
           case '*':
                hasil = angka1 * angka2;
                cout<< "hasil: " << angka1 << " * " << angka2 <<" = " << hasil << endl;
                break;
           case '/':
                if(angka2 !=0){
                hasil = angka1 / angka2;
                cout<< "hasil: " <<angka1 << " / " << angka2 <<" = " << hasil << endl;
                }else{
                      cout << "Error Pembagian dengan nol tidak di perbolehkan." << endl;
                      }
                      break;
                      default:
                              cout << "Operasi tidak valid!" << endl;
                              }
                              
                      return 0;
                      }
                
           

