#include <stdio.h>

int main(){
	int i, j, n, tmp;
	int nums;
	int a[100], flag[100] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; ++i){
		scanf("%d", &nums);
		a[i] = nums;
	}
	//sort 
	for (i = 0; i < n; ++i){
		for (j = 0; j < n - i - 1; ++j){
			if (a[j] < a[j + 1]){
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	//flag 
	int num;
	for (i = 0; i < n; ++i){
		num = a[i];
		while (num != 1){
			num = num % 2 ? (3 * num + 1) / 2 : num / 2;
			for (j = 0; j < n; ++j){
				if (a[j] == num)
					flag[j] = 1;
			}
		}
	}
	//print
	int cnt = 1;
	for (i = 0; i < n; ++i){
		if (cnt == 1){
			if (flag[i] == 0){
				printf("%d", a[i]);
				cnt++;
			}
		}
		else if (cnt != 1)
		if (flag[i] == 0)
			printf(" %d", a[i]);
	}

	return 0;
}