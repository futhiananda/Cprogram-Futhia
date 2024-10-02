#include <stdio.h>

int main(){
	int jumlah;
	float harga_per_laptop, total_harga;
	
	//input jumlah laptop yang dibeli
	printf("Masukkan jumlah laptop yang dibeli: ");
	scanf("%d", &jumlah);
	
	//input harga per laptop
	printf("Masukkan harga per laptop: ");
	scanf("%f", &harga_per_laptop);
	
	//Menghitung total harga
	total_harga = jumlah * harga_per_laptop;
	
	//Output total harga
	printf("Total harga pembelian: %.2f\n", total_harga);
	
	return 0;
}
