#include <iostream> 
#include <iomanip> //untuk manipulasi output/biasanya untuk menambahkan desimal
using namespace std;

int main(){
	double hasil = 1234567.89 * 1000;
	int pilihan,jumlahMalam;
	float harga, total = 0;
	
	//Menampilkan daftar kamar hotel
	cout << "=== Daftar Kamar Hotel ===" << endl;
	cout << "1. Kamar Tipe Standard - Rp. 350.000 per malam" << endl;
	cout << "2. Kamar Tipe Deluxe - Rp. 500.000 per malam" << endl;
	cout << "3. Kamar Tipe Executive - Rp. 1.000.000  per malam" << endl;
	cout << "4. Kamar Tipe Suite - Rp. 1.500.000 per malam" << endl;
	cout << "5. Kamar Tipe Presidential Suite - Rp. 2.500.000 per malam" << endl;
	
	//Meminta pengguna memilih dua kamar
	cout <<"\nMasukkan pilihan kamar pertama (1-5): ";
	cin >> pilihan;
	
	//Menentukkan harga berdasarkan tipe kamar yang di pilih
	switch(pilihan) {
		case 1:
			harga = 350000;
			cout << "Anda memilih kamar Standard." << endl;
			break;
		case 2:
			harga = 500000;
			cout << "Anda memilih kamar Deluxe." << endl;
			break;
		case 3:
			harga = 1000000;
			cout << "Anda memilih kamar Executive." << endl;
			break;
		case 4:
			harga = 1500000;
			cout << "Anda memilih kamar Suite." << endl;
			break;
		case 5:
			harga = 2500000;
			cout << "Anda memilik kamar Presidential Suite." <<endl;
			break;
			default:
			cout <<" Pilihan tidak tersedia!" << endl;
			return 0;
	}
	
	// Memiinta jumlah malam
	cout << "Meminta jumlah malam: ";
	cin >> jumlahMalam;
	
	//menghitung total harga
	cout << fixed << setprecision(2); //dua angka di belakang koma
	total = harga * jumlahMalam;
	
	//Menampilkan total harga
	cout << "Total harga yang harus dibayar: Rp. " << total << endl;
	
	return 0;
}
