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
	int i, n, m, cnt, nums[10000], j;
	scanf("%d%d", &m, &n);
	cnt = n;
	nums[0] = 2;
	i = 3;
	j = 1;
	while (cnt){
		if (isPrime(i)){
			nums[j++] = i;
			cnt--;
		}
		i += 2;
	}
	cnt = 0;
	for (i = m - 1; i<n; i++){
		printf("%d", nums[i]);
		cnt++;
		if (cnt % 10 == 0)
			printf("\n");
		else if (cnt != (n - m + 1))
			printf(" ");
	}
	return 0;
}