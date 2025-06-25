#include <iostream>
using namespace std;

class Keuangan {
private:
    int uangSaku;
    int pengeluaran[12]; 
    int jumlahBulan;

public:
    Keuangan(int saku, int bulan) {
        uangSaku = saku;
        jumlahBulan = bulan;
    }

    void inputPengeluaran() {
        for (int i = 0; i < jumlahBulan; i++) {
            cout << "Masukkan pengeluaran bulan ke-" << i + 1 << ": ";
            cin >> pengeluaran[i];
        }
    }

    void tampilkanPengeluaran() {
        cout << "\n--- Rincian Pengeluaran ---" << endl;
        for (int i = 0; i < jumlahBulan; i++) {
            cout << "Bulan " << i + 1 << ": Rp" << pengeluaran[i] << endl;
        }
    }

    int hitungTotalPengeluaran() {
        int total = 0;
        for (int i = 0; i < jumlahBulan; i++) {
            total += pengeluaran[i];
        }
        return total;
    }

    int hitungTabungan(int bulan) {
        if (bulan == 0) return 0;
        return (uangSaku - pengeluaran[bulan - 1]) + hitungTabungan(bulan - 1);
    }

    void tampilkanRingkasan() {
        int total = hitungTotalPengeluaran();
        int tabungan = hitungTabungan(jumlahBulan);

        cout << "\nTotal Pengeluaran: Rp" << total << endl;
        cout << "Total Tabungan: Rp" << tabungan << endl;
    }
};

int main() {
    int sakuBulanan, bulan;

    cout << "Masukkan uang saku bulanan Andi: ";
    cin >> sakuBulanan;
    cout << "Masukkan jumlah bulan: ";
    cin >> bulan;

    Keuangan andi(sakuBulanan, bulan);
    andi.inputPengeluaran();
    andi.tampilkanPengeluaran();
    andi.tampilkanRingkasan();

    return 0;
}

