#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim, nama;
};

void urutkan(Mahasiswa mhs[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(mhs[i].nim > mhs[j].nim) {
                swap(mhs[i], mhs[j]);
            }
        }
    }
}

void cari(Mahasiswa mhs[], int n, string target) {
    for(int i = 0; i < n; i++) {
        if(mhs[i].nim == target) {
            cout << "Ditemukan!" << endl;
            cout << "NIM  : " << mhs[i].nim << endl;
            cout << "Nama : " << mhs[i].nama << endl;
            return;
        }
    }
    cout << endl;
    cout << "Data tidak ditemukan." << endl;
}

int main() {
    const int n = 5;
    Mahasiswa mhs[n];

    cout << "Input 5 data mahasiswa:\n";
    for(int i = 0; i < n; i++) {
        cout << "Data ke-" << i+1 << ":\n";
        cout << "NIM  : "; getline(cin, mhs[i].nim);
        cout << "Nama : "; getline(cin, mhs[i].nama);
        cout << endl;
    }

    urutkan(mhs, n);
    cout << "Data setelah diurutkan (Ascending): " << endl;
    for(int i = 0; i < n; i++) {
        cout << mhs[i].nim << " - " << mhs[i].nama << endl;
    }

    string cariNIM;
    cout << "Masukkan NIM yang ingin dicari: ";
    getline(cin, cariNIM);
    cari(mhs, n, cariNIM);

    return 0;
}

