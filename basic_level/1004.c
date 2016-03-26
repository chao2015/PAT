#include <stdio.h>

typedef struct{
	char name[20];
	char num[20];
	int score;
}stu;

int main(){
	int n, i;
	stu stu, max, min;
	max.score = 0, min.score = 0x7fffffff;
	scanf("%d", &n);
	for (i = 0; i < n; ++i){
		scanf("%s%s%d", &stu.name, &stu.num, &stu.score);
		if (max.score < stu.score){
			strcpy(max.name, stu.name);
			strcpy(max.num, stu.num);
			max.score = stu.score;
		}
		if (min.score>stu.score){
			strcpy(min.name, stu.name);
			strcpy(min.num, stu.num);
			min.score = stu.score;
		}
	}
	printf("%s %s\n", max.name, max.num);
	printf("%s %s\n", min.name, min.num);

	return 0;
}