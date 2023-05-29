#include <stdio.h>
int main(){
	int ans = 0;
	while(1){
		int n;
		scanf("%d",&n);

		if(n==0) break;
		if(n>0) ans+=n;
	}
	printf("%d",ans);
}
