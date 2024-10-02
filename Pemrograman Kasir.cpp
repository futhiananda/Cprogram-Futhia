#include <iostream>
#include <iomanip>
using namespace std;

struct Produk{
	string nama;
	string kode;
	float harga;
};

int cariProduk(Produk produk[], int jumlah, string kode) {
	for (int i= 0; i< jumlah; i++){
		if (produk[i].kode == kode){
			return i; //Mengembalikan indeks produk jika di temukan
		}
	}
	return -1; //mengembalikan angka jika tidak di temukan
}

int main(){
	//daftar produk (bisa disimpan dalam array atau database)
	Produk produk[7] {
		{"Indomie goreng","A001",3500},
		{"Teh kotak","A002",4500},
		{"Shampo zinc","A003",8000},
		{"Sabun lifebuoy","A004",5500},
		{"Yogurt Cimory","A005",9500},
		{"Kopi ABC","A006",2500},
		{"Kispray","A007",10500}
	};
	
	string kodeProduk;
	int jumlahBeli;
	float total = 0, bayar, kembalian;
	char lanjut;
	
	do{
		//Tampilkan data produk
		cout << "\n==========Daftar Produk===========\n";
		cout << setw(10)<<left<<"Kode" << setw(20) << left << "Nama Produk" << setw(10) << "Harga" << endl;
		for (int i = 0; i < 5; i++){
			cout << setw(10) << left << produk[i].kode << setw(20) << left << produk[i].nama << "Rp"<< produk[i].harga << endl;
		}
		
		//input kode produk
		cout << "\nMasukkan kode produk: ";
		cin >> kodeProduk;
		
		int index = cariProduk(produk, 7, kodeProduk);
		if(index == -1) {
			cout << "Produk tidak ditemukan!\n";
			continue;
		}
		
		//input jumlah prduk yang di beli
		cout << "Jumlah yang dibeli: ";
		cin >> jumlahBeli;
		
		//Hitung total untuk produk yang dipilih
		total += produk[index].harga * jumlahBeli;
		
		cout<< "Apakah ingin menambah produk lain? (y/n): ";
		cin >> lanjut;
	}while (lanjut == 'y'||lanjut =='Y');
	
	//tampilkan total akhir
	cout << "\nTotal yang harus dibayar: Rp. "<< total<< endl;
	
	//input uang dari pembeli
	cout << "Bayar: Rp. ";
	cin >> bayar;
	
	//Hitung kembalian
	if(bayar >= total){
		kembalian = bayar-total;
		cout << "Kembalian: Rp. " << kembalian << endl;
	}else{
		cout << "uang tidak cukup!" <<endl;
	}
	return 0;
	}
	
