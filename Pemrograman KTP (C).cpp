#include <stdio.h>

int main(){
	char nama[50], alamat[100];
	long long nik;
	
	//input NIK
	printf("Masukkan NIK: ");
	scanf("%lld", &nik);
	getchar(); //membersihkan newline
	
	//input Nama
	printf("Masukkan Nama: ");
	fgets(nama, sizeof(nama), stdin);
	
	//input Alamat
	printf("Masukkan Alamat: ");
	fgets(alamat, sizeof(alamat), stdin);
	
	//Output data KTP
	printf("\n---Data KTP---\n");
	printf("NIK :%lld\n", nik);
	printf("Nama :%s", nama);
	printf("Alamat :%s", alamat);
	
	return 0;
}
