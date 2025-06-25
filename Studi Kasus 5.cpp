#include <iomanip>
#include <iostream>
using namespace std;

const int MAKS_MATKUL = 10;
const int BIAYA_PER_SKS = 125000;
const float DISKON = 0.15;

struct Matkul {
  string nama;
  int sks;
};

void tampilkanMatkul(Matkul matkul[], int index, int jumlah) {
  if (index == jumlah)
    return;
  cout << "| " << setw(2) << index + 1 << " | " << setw(30) << left
       << matkul[index].nama << " | " << setw(8) << right << matkul[index].sks
       << " |\n";
  tampilkanMatkul(matkul, index + 1, jumlah);
}

int hitungTotalSKS(Matkul matkul[], int index, int jumlah) {
  if (index == jumlah)
    return 0;
  return matkul[index].sks + hitungTotalSKS(matkul, index + 1, jumlah);
}

int main() {
  string nim, nama;
  int jumlah;

  Matkul matkul[MAKS_MATKUL];

  cout << "NIM\t\t: ";
  getline(cin, nim);
  cout << "Nama Mahasiswa\t: ";
  getline(cin, nama);
  cout << "Jumlah mata kuliah : ";
  cin >> jumlah;
  cin.ignore();

  for (int i = 0; i < jumlah; i++) {
    cout << "\nNama mata kuliah ke-" << i + 1 << ": ";
    getline(cin, matkul[i].nama);
    cout << "Jumlah SKS: ";
    cin >> matkul[i].sks;
    cin.ignore();
  }

  int totalSKS = hitungTotalSKS(matkul, 0, jumlah);
  int totalBiaya = totalSKS * BIAYA_PER_SKS;
  float potongan = totalBiaya * DISKON;
  float biayaAkhir = totalBiaya - potongan;

  cout << "\nNIM              : " << nim << endl;
  cout << "Nama Mahasiswa   : " << nama << endl;
  cout << "+================================================+\n";
  cout << "| No | Nama Mata Kuliah               |  SKS     |\n";
  cout << "--------------------------------------------------\n";
  tampilkanMatkul(matkul, 0, jumlah);
  cout << "+================================================+\n";
  cout << "| Total SKS      : " << setw(29) << right << totalSKS << " |\n";
  cout << "| Total Biaya    : Rp. " << setw(25) << right << totalBiaya
       << " |\n";
  cout << "| Diskon 15%     : Rp. " << setw(25) << right << potongan << " |\n";
  cout << "| Biaya Akhir    : Rp. " << setw(25) << right << biayaAkhir
       << " |\n";
  cout << "+================================================+\n";

  return 0;
}
