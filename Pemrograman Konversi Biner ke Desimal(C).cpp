#include <stdio.h>
int main(){
	int n, decimal = 0, base = 1, remainder;
	printf("Masukkan bilangan biner: ");
	scanf("%d",&n);
	while(n > 0){
		remainder = n % 10;
		decimal = decimal + remainder * base;
		n = n/10;
	}
	printf("Bilangan desimal: %d\n", decimal);
	return 0;
}
