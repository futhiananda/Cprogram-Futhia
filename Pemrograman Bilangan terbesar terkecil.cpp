#include <iostream>
using namespace std;

int main(){
	int n, angka, terbesar, terkecil;
	
	//Meminta pengguna memasukkan jumlah bilangan yang akan dicek
	cout << "Masukkan jumlah bilangan: ";
	cin >> n;
	
	//Meminta pengguna  memmasukkan bilangan pertama
	cout << "Masukkan bilangan ke-1: ";
	cin >> angka;
	
	//set bilangan pertama sebagai terbesar dan terkecil sementara
	terbesar = angka;
	terkecil = angka;
	
	//proses input bilangan berikutnya
	for (int i = 2; i <= n; i++){
		cout << "Masukkan bilangan ke-" << i <<":";
		cin >> angka;
		
		//cek apakah bilangan lebih besar dari 'terbesar'
		if (angka > terbesar){
			terbesar = angka;
		}
	}
	
	//Menampilkan hasil terbesar dan terkecil
	cout << "\nBilangan terbesar adalah: " << terbesar << endl;
	cout << "Bilangan terkecil adalah: " << terkecil << endl;
	
	return 0;
}
