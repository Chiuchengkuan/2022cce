#include <stdio.h>
int main(){
	int n,a[11],b[11];
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		scanf("%d",&b[i]);
	}
	for(int i=1;i<=n;i++){
		printf("%d ",a[i]+b[i]);
	}
}
