#include <stdio.h>
#include <string.h>

int main(){
	int n, i=0,j=0,num[1000],num2[1000];
	int sum1=0,sum2=0,cnt3=0,sum4=0,max=0;
	float ret4;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&num[i++]);
	}
	for(i=0;i<n;i++){
		if(num[i]%10==0)
			sum1+=num[i];
		if(num[i]%5==1)
			num2[j++]=num[i];
		if(num[i]%5==2)
			cnt3++;
		if(num[i]%5==3){
			cnt4++;
			sum4+=num[i];
		}
		if(num[i]%5==4){
			if(num[i]>max)
				max=num[i];
		}
	}
	for(i=0;i<strlen(num2);++i){
		if(strlen(num2)%2==1)
			sum2+=num2[strlen(num2)-1];
		else if(i%2==0){
			sum2+=(num2[i]-num2[i-1]);
		}
	}
	ret4=sum4/cnt4;
	printf("%d %d %d %.1f %d",sum1,sum2,cnt3,ret4,max);
	
	return 0;
}