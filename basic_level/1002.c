#include <stdio.h>
#include <string.h>

int main(){
	int i, sum = 0;
	int a[10] = {0};
	char s[100];
	gets(s);
	
	for (i = 0; i < strlen(s); ++i){
		sum += s[i]-'0';
	}
	i = 0;
	while (sum){
		a[i] = sum % 10;
		sum /= 10;
		i++;
	}
	while (i){
		switch (a[i-1]){
		case 0:printf("ling"); break;
		case 1:printf("yi"); break;
		case 2:printf("er"); break;
		case 3:printf("san"); break;
		case 4:printf("si"); break;
		case 5:printf("wu"); break;
		case 6:printf("liu"); break;
		case 7:printf("qi"); break;
		case 8:printf("ba"); break;
		case 9:printf("jiu"); break;
		default:break;
		}
		if ((i-1) != 0)
			printf(" ");
		i--;
	}
	return 0;
}