#include <stdio.h>
int main(){
	int base, exp, result = 1;
	printf("Masukkan basis dan eksponen: ");
	scanf("%d %d", &base, &exp);
	for (int i = 1; i<= exp; i++) {
		result *= base;
	}
	printf("%d pangkat %d adalah %d\n", base, exp, result);
	return 0;
}
