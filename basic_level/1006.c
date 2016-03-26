#include <stdio.h>

int main(){
	int num, b, s, n, i;
	scanf("%d", &num);
	n = num % 10;
	num /= 10;
	s = num % 10;
	b = num / 10;
	for (i = 0; i < b; ++i)
		printf("B");
	for (i = 0; i < s; ++i)
		printf("S");
	for (i = 0; i < n; ++i)
		printf("%d",i+1);
	
	return 0;
}