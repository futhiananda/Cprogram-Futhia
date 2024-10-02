#include <stdio.h>
int main(){
	int n, sum = 0;
	float avg;
	printf("Masukkan jumlah elemen: ");
	scanf("%d", &n);
	int arr[n];
	for (int i =0; i<n; i++) {
		printf("Masukkan elemen ke-%d:", i + 1);
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	avg = (float)sum /n;
	printf("Rata-rata: %.2f\n", avg);
	return 0;
}
