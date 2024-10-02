#include <stdio.h>
int main(){
	int n, reverse = 0,remainder;
	printf("Masukkan angka: ");
	scanf("%d",&n);
	while(n !=0){
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n/=10;
	}
	printf("Angka terbalik: %d\n",reverse);
	return 0;
}
