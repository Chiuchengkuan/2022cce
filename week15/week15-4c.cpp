#include <stdio.h>
int main(){
	int c[11];
	for(int i=0;i<10;i++){
		scanf("%d",&c[i]);
	}
	for(int i=10-1;i>=0;i--){
		printf("%d ",c[i]);
	}
}
