#include <iostream>
using namespace std;

int main(){
	int pilihan, jumlah;
	float harga,total=0;
	
	//Menampilkan daftar menu
	cout << "=== Menu Makanan ===" << endl;
	cout << "1. Nasi Goreng Ayam - Rp.12.000" << endl;
	cout << "2. Kwetiau Goreng Seafood - Rp. 20.000" << endl;
	cout << "3. Cumi Goreng Tepung - Rp. 30.000" << endl;
	cout << "4. Sate Ayam - Rp. 15.000" << endl;
	cout << "5. Ayam Bakar + Nasi - Rp. 22.000" << endl;
	
	//Memilih makanan
	cout << "\nMemilih pilihan makanan (1-5): ";
	cin >> pilihan;
	
	//menentukan harga berdasarkan pilihan
	switch(pilihan){
		case 1:
			harga = 12000;
			cout << "Anda memilih Nasi Goreng Ayam." << endl;
			break;
		case 2:
			harga = 20000;
			cout << "Anda memilih Kwetiau Goreng Seafood." << endl;
			break;
		case 3:
			harga = 30000;
			cout << "Anda memilih Cumi Goreng Tepung." << endl;
			break;
		case 4:
			harga = 15000;
			cout << "Anda memilih Sate Ayam." << endl;
			break;
		case 5:
			harga = 22000;
			cout << "Anda memilih Ayam Bakar + Nasi." <<endl;
			break;
			default:
				cout << "Pilihan tidak tersedia" << endl;
				return 0;
				
	}
	//Meminta jumlah pesanan
	cout << "Masukkan jumlah pesanan: ";
	cin >> jumlah;
	
	//Menghitung harga total
	total = harga * jumlah;
	
	//Menampilkan total harga
	cout << "Total harga yang harus dibayar: Rp " << total <<endl;
	
	return 0;
}
