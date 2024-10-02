#include <iostream>
using namespace std;

int main(){
	float angka1, angka2, hasil;
	
	//Meminta input pengguna
	cout << "Masukkan angka pertama: ";
	cin >> angka1;
	cout << "Masukkan angka kedua: ";
	cin >> angka2;
	
	//Memeriksa apakah angka kedua adalah 0
	if(angka2==0){
		cout << "Error: Pembagian dengan 0 tidak diperbolehkan." << endl;
	}else{
		
		//Melakukan pembagian
		hasil = angka1 / angka2;
		cout << "Hasil dari " << angka1 << " / " << angka2 << " adalah: " << hasil << endl;
	}
	return 0;
}
