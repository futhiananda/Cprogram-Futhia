#include <iostream>
#include <iomanip>
using namespace std;

class MenuItem {
    string nama;
    int harga;
    int jumlah;

public:
    void setItem(string n, int h, int j) {
        nama = n;
        harga = h;
        jumlah = j;
    }

    int subtotal() {
        return harga * jumlah;
    }

    string getNama() {
        return nama;
    }

    int getHarga() {
        return harga;
    }

    int getJumlah() {
        return jumlah;
    }
};

class RumahMakan {
    MenuItem pesanan[10];
    int totalBelanja = 0;
    int ongkir = 0;
    int potonganOngkir = 0;
    double diskon = 0.0;
    double totalDiskon = 0.0;
    double totalBayar = 0.0;
    int jumlahPesanan = 0;

public:
    void tambahPesanan(string nama, int harga, int jumlah) {
        pesanan[jumlahPesanan].setItem(nama, harga, jumlah);
        jumlahPesanan++;
    }

    void hitungTotal(int jarak) {
        for (int i = 0; i < jumlahPesanan; i++) {
            totalBelanja += pesanan[i].subtotal();
        }

        // Hitung ongkir
        ongkir = (jarak < 3) ? 15000 : 25000;

        // Potongan ongkir dan diskon
        if (totalBelanja > 150000) {
            potonganOngkir = 8000;
            diskon = 0.35;
        } else if (totalBelanja > 50000) {
            potonganOngkir = 5000;
            diskon = 0.15;
        } else if (totalBelanja > 25000) {
            potonganOngkir = 3000;
        }

        totalDiskon = totalBelanja * diskon;
        totalBayar = (totalBelanja - totalDiskon) + (ongkir - potonganOngkir);
    }

    void cetakSlip() {
        cout << fixed << setprecision(0);
        cout << "\n=== SLIP PEMBAYARAN ===\n";
        for (int i = 0; i < jumlahPesanan; i++) {
            cout << pesanan[i].getNama() << " x" << pesanan[i].getJumlah()
                 << " = Rp" << pesanan[i].subtotal() << endl;
        }
        cout << "\nTotal Belanja       : Rp" << totalBelanja << endl;
        cout << "Diskon              : Rp" << totalDiskon << endl;
        cout << "Biaya Ongkir        : Rp" << ongkir << endl;
        cout << "Potongan Ongkir     : Rp" << potonganOngkir << endl;
        cout << "Total Bayar         : Rp" << totalBayar << endl;
        cout << "Terima kasih telah memesan!\n";
    }
};

int main() {
    RumahMakan rm;
    int pilihan, jumlah;
    char lagi;
    int jarak;

    do {
        cout << "=== MENU RUMAH MAKAN ===\n";
        cout << "1. Ayam Geprek  : Rp21000\n";
        cout << "2. Ayam Goreng  : Rp17000\n";
        cout << "3. Udang Goreng : Rp19000\n";
        cout << "4. Cumi Goreng  : Rp20000\n";
        cout << "5. Ayam Bakar   : Rp25000\n";

        cout << "\nPilih menu (1-5): ";
        cin >> pilihan;
        cout << "Jumlah porsi: ";
        cin >> jumlah;

        switch (pilihan) {
            case 1: rm.tambahPesanan("Ayam Geprek", 21000, jumlah); break;
            case 2: rm.tambahPesanan("Ayam Goreng", 17000, jumlah); break;
            case 3: rm.tambahPesanan("Udang Goreng", 19000, jumlah); break;
            case 4: rm.tambahPesanan("Cumi Goreng", 20000, jumlah); break;
            case 5: rm.tambahPesanan("Ayam Bakar", 25000, jumlah); break;
            default: cout << "Menu tidak valid!\n"; break;
        }

        cout << "Ingin pesan lagi? (y/n): ";
        cin >> lagi;
    } while (lagi == 'y' || lagi == 'Y');

    cout << "Masukkan jarak rumah (KM): ";
    cin >> jarak;

    rm.hitungTotal(jarak);
    rm.cetakSlip();

    return 0;
}

