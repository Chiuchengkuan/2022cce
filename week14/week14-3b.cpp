#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int ans = 0;
	if(n<=1500) ans=100;
	else {
		ans = 100 + (n-1500)/250*5;
		if(n%250>0) ans+=5;
	}
	printf("%d",ans);
}
