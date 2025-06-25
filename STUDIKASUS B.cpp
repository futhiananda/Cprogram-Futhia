#include <iostream>
using namespace std;

const int MAX = 100;

class Karyawan {
public:
    string id;
    string nama;
    string jabatan;
    string notelp;
};

class SistemKaryawan {
public:
    Karyawan data[MAX];
    int jumlah;

    void inputData() {
        cout << "Masukkan jumlah data karyawan: ";
        cin >> jumlah;
        cin.ignore();

        for (int i = 0; i < jumlah; i++) {
        	cout << endl;
            cout << "Karyawan ke-" << i+1 << endl;
            cout << "ID         : ";
            getline(cin, data[i].id);
            cout << "Nama       : ";
            getline(cin, data[i].nama);
            cout << "Jabatan    : ";
            getline(cin, data[i].jabatan);
            cout << "No. Telp   : ";
            getline(cin, data[i].notelp);
        }
    }

    void tampilkanData() {
    	cout << endl;
        cout << "Daftar Karyawan: " << endl;
        for (int i = 0; i < jumlah; i++) {
        	cout << endl;
            cout << "ID: " << data[i].id << endl;
            cout << "Nama: " << data[i].nama << endl;
            cout << "Jabatan: " << data[i].jabatan << endl;
            cout << "No.Telp: " << data[i].notelp << endl;
            cout << endl;
        }
    }

    void urutkanData(int urutan) {
        for (int i = 0; i < jumlah - 1; i++) {
            for (int j = i + 1; j < jumlah; j++) {
                bool kondisi = (urutan == 1) ? (data[i].id > data[j].id) : (data[i].id < data[j].id);
                if (kondisi) {
                    Karyawan temp = data[i];
                    data[i] = data[j];
                    data[j] = temp;
                }
            }
        }
        cout << endl;
        cout << "Data berhasil diurutkan." << endl;
        tampilkanData(); 
    }

    void cariData(string cariID) {
        bool ditemukan = false;
        for (int i = 0; i < jumlah; i++) {
            if (data[i].id == cariID) {
            	cout << endl;
                cout << "Data Ditemukan: " << endl;
                cout << "ID       : " << data[i].id << endl;
                cout << "Nama     : " << data[i].nama << endl;
                cout << "Jabatan  : " << data[i].jabatan << endl;
                cout << "No. Telp : " << data[i].notelp << endl;
                ditemukan = true;
                break;
            }
        }

        if (!ditemukan) {
            cout << endl << "Data dengan ID " << cariID << " tidak ditemukan." << endl;
        }
    }
};

int main() {
    SistemKaryawan sistem;
    int pilihan;
    string cariID;

    do {
        cout << "\n=== MENU SISTEM KARYAWAN PT.QUAIRO ===\n";
        cout << "1. Input Data Karyawan" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "3. Urutkan Data Berdasarkan ID" << endl;
        cout << "4. Cari Data Berdasarkan ID" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                sistem.inputData();
                break;
            case 2:
                sistem.tampilkanData();
                break;
            case 3:
                int pilih;
                cout << "1. Ascending" << endl;
				cout << "2. Descending" << endl;
				cout << "Pilih: ";
                cin >> pilih;
                cin.ignore();
                sistem.urutkanData(pilih);
                break;
            case 4:
                cout << "Masukkan ID yang dicari: ";
                getline(cin, cariID);
                sistem.cariData(cariID);
                break;
            case 5:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 5);

    return 0;
}

