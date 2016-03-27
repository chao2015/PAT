#include <stdio.h>

int main(){
	int num[100];
	int i, n, m, cnt = 0;
	scanf("%d%d", &n, &m);
	for (i = 0; i<n; ++i)
		scanf("%d", &num[i]);
	m = n - m%n;
	for (i = m; i<n; ++i){
		printf("%d", num[i]);
		cnt++;
		if (cnt != n)
			printf(" ");
	}
	for (i = 0; i<m; ++i){
		printf("%d", num[i]);
		cnt++;
		if (cnt != n)
			printf(" ");
	}
	return 0;
}