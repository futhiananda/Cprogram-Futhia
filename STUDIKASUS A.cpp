#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim, nama, prodi, no_telp;
};

void tukar(Mahasiswa &a, Mahasiswa &b) {
    Mahasiswa temp = a;
    a = b;
    b = temp;
}

void urutkan(Mahasiswa mhs[], int n, bool ascending) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if((ascending && mhs[i].nim > mhs[j].nim) || (!ascending && mhs[i].nim < mhs[j].nim)) {
                tukar(mhs[i], mhs[j]);
            }
        }
    }
}

void cari(Mahasiswa mhs[], int n, string target) {
    for(int i = 0; i < n; i++) {
        if(mhs[i].nim == target) {
        	cout << endl;
            cout << "Ditemukan!\n";
            cout << "NIM   : " << mhs[i].nim << endl;
            cout << "Nama  : " << mhs[i].nama << endl;
            cout << "Prodi : " << mhs[i].prodi << endl;
            cout << "NoTelp: " << mhs[i].no_telp << endl;
            return;
        }
    }
    cout << endl;
    cout << "Data tidak ditemukan.\n";
}

int main() {
    int n;
    cout << "Jumlah data mahasiswa: ";
    cin >> n;
    cin.ignore();

    Mahasiswa mhs[100];
    for(int i = 0; i < n; i++) {
        cout << "Data ke-" << i+1 << ": " << endl;
        cout << "NIM     : "; getline(cin, mhs[i].nim);
        cout << "Nama    : "; getline(cin, mhs[i].nama);
        cout << "Prodi   : "; getline(cin, mhs[i].prodi);
        cout << "No Telp : "; getline(cin, mhs[i].no_telp);
        cout << endl;
    }

    int pilihan;
    do {
    	cout << endl;
        cout << "=== Menu === " << endl;
		cout << "1. Urutkan Ascending" << endl;
		cout << "2. Urutkan Descending" << endl;
		cout << "3. Cari NIM" << endl;
		cout << "4. Keluar" << endl;
		cout << "Pilih (1-4): ";
        cin >> pilihan;
        cin.ignore();

        if(pilihan == 1 || pilihan == 2) {
            urutkan(mhs, n, pilihan == 1);
            cout << "\nData setelah diurutkan: " << endl;
            for(int i = 0; i < n; i++) {
                cout << mhs[i].nim << " - " << mhs[i].nama << " - " << mhs[i].prodi << " - " << mhs[i].no_telp << endl;
            }
        } else if(pilihan == 3) {
            string cariNIM;
            cout << "Masukkan NIM yang dicari: ";
            getline(cin, cariNIM);
            cari(mhs, n, cariNIM);
        }
    } while(pilihan != 4);

    return 0;
}

