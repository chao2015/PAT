#include <stdio.h>
#include <math.h>

int isPrime(int num){
	int i, flag = 1;
	int temp = sqrt(num);
	for (i = 3; i <= temp; i++){
		if (num%i == 0)
			flag = 0;
	}
	return flag;
}

int main(){
	int n, i, k = 0, cnt = 0;
	int a[100000] = { 0 };
	scanf("%d", &n);
	for (i = 3; i <= n; i+=2){
		if (isPrime(i))
			a[k++] = i;
	}
	for (i = 0; i < k-1; ++i){
		if (a[i + 1] - a[i] == 2)
			cnt++;
	}
	printf("%d", cnt);

	return 0;
}