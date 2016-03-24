#include <stdio.h>
#include <string.h>

int PAT_test(char *s){
	int i, flag=0, cnt_a = 0, cnt_p = 0, cnt_t = 0;
	char *p1, *p2;
	for (i = 0; i < strlen(s); ++i){
		if (s[i] == 'A')
			cnt_a++;
		else if (s[i] == 'P')
			cnt_p++;
		else if (s[i] == 'T')
			cnt_t++;
		else{
			printf("NO\n");
			flag = 1;
			break;
		}
	}
	if (flag != 1 && cnt_p == 1 && cnt_t == 1 && cnt_a != 0){
		p1 = strchr(s, 'P');
		p2 = strchr(s, 'T');
		if ((p1 - s)*(p2 - p1 - 1) == strlen(s)-(p2-s)-1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	else if (flag != 1)
		printf("NO\n");
}

int main(){
	int n, i;
	char s[100];
	scanf("%d", &n);
	for (i = 0; i < n; ++i){
		scanf("%s",&s);
		PAT_test(s);
	}

	return 0;
}