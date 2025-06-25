#include <iostream>
#include <string>
using namespace std;

const int MAKS_BUKU = 100;
struct Buku {
	string judul;
	int stok;
};

Buku inventaris[MAKS_BUKU];
int jumlahBuku = 0;

void tambahBuku() {
	if (jumlahBuku >= MAKS_BUKU) {
		cout << "Inventaris penuh.\n";
		return;
	}
	
	string judulBaru;
	int stokBaru;
	cout << "Masukkan judul buku: ";
	getline(cin, judulBaru);
	cout << "Masukkan jumlah stok: ";
	cin >> stokBaru;
	cin.ignore();
	
	for (int i=0; i<jumlahBuku; i++) {
		if (inventaris[i].judul == judulBaru) {
			inventaris[i].stok += stokBaru;
			cout << "Stok buku diperbarui.\n";
			return;
		}
	}
	
	inventaris[jumlahBuku].judul = judulBaru;
	inventaris[jumlahBuku].stok = stokBaru;
	jumlahBuku++;
	cout << "Buku berhasil ditambahkan.\n";
}

void hapusBuku() {
	string judulHapus;
	cout << "Masukkan judul yang ingin dihapus: ";
	getline(cin, judulHapus);
	
	for (int i=0; i<jumlahBuku; i++) {
		if (inventaris[i].judul == judulHapus) {
			for (int j=i; j<jumlahBuku-1; j++) {
				inventaris[j] = inventaris[j + 1];
			}
			jumlahBuku--;
			cout << "Buku berhasil dihapus.\n";
			return;
		}
	}
	cout << "Buku tidak ditemukan.\n";
}

void tampilkanBuku() {
	if (jumlahBuku == 0) {
		cout << "Tidak ada buku dalam inventaris.\n";
	} else {
		cout << "\nDaftar Buku: \n";
		for (int i=0; i<jumlahBuku; i++) {
			cout << "- " << inventaris[i].judul << " (stok: " << inventaris[i].stok << ")\n"; 
		}
	}
}

void totalBuku() {
	int total = 0;
	for (int i=0; i<jumlahBuku; i++) {
		total += inventaris[i].stok;
	}
	cout << "Total stok buku: " << total << endl;
}

void menu() {
	int pilihan;
	do {
		cout << "\n=== MENU INVENTARIS TOKO BUKU ===\n";
		cout << "1. Tambah Buku" << endl;
		cout << "2. Hapus Buku" << endl;
		cout << "3. Tampilkan Semua Buku" << endl;
		cout << "4. Hitung Total Stok" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilih Menu (1-5): ";
		cin >> pilihan;
		cin.ignore();
		
		switch (pilihan) {
			case 1: 
				tambahBuku();
			break;
			case 2:
				hapusBuku();
			break;
			case 3:
				tampilkanBuku();
			break;
			case 4:
				totalBuku();
			break;
			case 5:
				cout << "Terima kasih. Program selesai.\n";
			break;
			default:
				cout << "Pilihan tidak valid.\n";
			break;	
		}
	} while (pilihan != 5);
}

int main() {
	menu();
	return 0;
}
