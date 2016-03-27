#include <stdio.h>
#include <string.h>

int main(){
	int i=0,j=0,cnt,a[10],n[10];
	memset(a,0,sizeof(a));
	memset(n,0,sizeof(n));
	while(scanf("%d%d",&a[i++],&n[j++])!=EOF){
		cnt++;
	}
	for(i=0,j=0;i<cnt;++i,++j){
		if(a[i]==0&&n[i]==0){
			a[i]=0;
			n[i]=0;
		}
		else if(a[i]!=0&&n[i]!=0){
			a[i]=a[i]*n[i];
			n[i]=n[i]-1;
		}
		else{
			continue;
		}
		if(i!=cnt-1){
			printf("%d %d ",a[i],n[i]);
		}
		else
			printf("%d %d",a[i],n[i]);
	}
	
	return 0;
}