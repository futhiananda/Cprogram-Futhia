#include <iostream>
using namespace std;

int main(){
	string nama;
	int semester, SPP;
	float totalBayar, diskon;
	
	//input data siswa
	cout<<"Masukkan Nama mahasiswa: ";
	getline(cin,nama);
	
	cout<<"Masukkan semester mahasiswa (1-8): ";
	cin >> semester;
	
	//Menentukan besar SPP berdasarkan semester
	if(semester >= 1 && semester<=2){
			SPP = 1200000; //SPP untuk semester 1-8
			SPP = 1200000; //SPP untuk semester 2-8
		}else if(semester >= 3 && semester <=6){
			SPP = 1100000; //SPP untuk semester 3-8
			SPP = 1100000; //SPP untuk semester 4-8
			SPP = 1100000; //SPP untuk semester 5-8
			SPP = 1100000; //SPP untuk semester 6-8			
		}else if(semester >=7 && semester <=8){
			SPP = 1000000; //SPP untuk semester 7-8
			SPP = 1000000; //SPP untuk semester 8-8	
		}else{
				cout << "Data tidak valid"<< endl;
				return 0;
			}
			
			//Menentukan diskon berdasarkan semester
			if(semester <=2) {
				diskon = 0.20; //20% diskon untuk semester 1-8
				diskon = 0.20; //20% diskon untuk semester 2-8
			}else if(semester <=6){
				diskon = 0.10; //10% diskon untuk semester 3-8
				diskon = 0.10; //10% diskon untuk semester 4-8
				diskon = 0.10; //10% diskon untuk semester 5-8
				diskon = 0.10; //10% diskon untuk semester 6-8
			}else if(semester <=8){
				diskon = 0.05; //5% diskon untuk semester 7-8
				diskon = 0.05; //5% diskon untuk semester 8-8
			}
		
			//Menghitung total pembayaran setelah diskon
			totalBayar = SPP - (SPP * diskon);
			
			//Output hasil perhitungan 
			cout << "\n---Rincian Pembayaran SPP---"<< endl;
			cout << "Nama Mahasiswa : " << nama <<endl;
			cout << "Semester : " << semester << endl;
			cout << "SPP Bulanan : Rp " << SPP << endl;
			cout << "Diskon : " << diskon * 100 << "%" << endl;
			cout << "Total Bayar : " << totalBayar <<endl;
			
			return 0;
			
			}
