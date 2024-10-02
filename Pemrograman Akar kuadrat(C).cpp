#include <stdio.h>
#include <math.h>

int main(){
	double num, result;
	printf("Masukkan angka: ");
	scanf("%lf",&num);
	result = sqrt(num);
	printf("akar kuadrat dari %.2lf adalah %.2lf\n", num, result);
	return 0;
}
