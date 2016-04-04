#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char s[4][61];
	char week[8][4] = { " ", "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };//notice:[8][3]is false
	int i, flag = 0;
	for (i = 0; i < 4; ++i){
		scanf("%s", &s[i]);
	}
	for (i = 0; s[0][i] != '\0'; ++i){
		//for (j = 0; s[1][j] != '\0'; ++j) //此题有歧义：指对应位置的相同字符
		if (s[0][i] == s[1][i] && flag == 0 && s[0][i] >= 'A'&&s[0][i] <= 'G'){
			flag = 1;
			printf("%s ", week[s[0][i] - 16 - '0']);
			continue;
		}
		if (s[0][i] == s[1][i] && flag == 1){
			if (s[0][i] >= '0'&&s[0][i] <= '9'){
				printf("%02d:", s[0][i] - '0');
				break;
			}
			else if (s[0][i] >= 'A'&&s[0][i] <= 'N'){
				printf("%02d:", s[0][i] - 55);
				break;
			}
		}
	}
	for (i = 0; s[2][i] != '\0'; ++i){
		if (s[2][i] == s[3][i] && isalpha(s[2][i])){
			printf("%02d", i);
			break;
		}
	}
	return 0;
}