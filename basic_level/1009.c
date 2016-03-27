#include <stdio.h>
#include <string.h>

void str_reverse(char* input){
	char output[50][50];
	memset(output, 0, sizeof(output));
	int i, j=0, num = 0;
	for (i = 0; i < strlen(input); ++i){
		if (input[i] == ' '){
			j = 0;
			num++;
			continue;
		}
		output[num][j++] = input[i];
	}
	for (; num>0; --num){
		printf("%s ", output[num]);
	}
	printf("%s", output[num]);
}

int main()
{
	char c[100];
	gets(c);
	str_reverse(c);

	getchar();
	return 0;
}