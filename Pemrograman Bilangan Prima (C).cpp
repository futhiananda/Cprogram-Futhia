#include <stdio.h>
int main(){
	int n, i, flag=0;
	printf("Masukkan angka: ");
	scanf("%d", &n);
	for(i = 2; i <= n / 2; ++i){
		if(n % i == 0){
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	printf("%d adalah bilangan prima.\n", n);
	else
	printf("%d bukan bilangan prima.\n", n);
	return 0;
}
