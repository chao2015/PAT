#include <stdio.h>

int main(){
	int n,cnt=0;
	scanf("%d",&n);
	long long int a,b,c;
	while(n--){
		scanf("%lld%lld%lld",&a,&b,&c);
		cnt++;
		if(a+b>c)
			printf("Case #%d: true\n",cnt);
		else
			printf("Case #%d: false\n",cnt);
	}
	return 0;
}