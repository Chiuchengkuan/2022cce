#include <stdio.h>
int main(){
	int x1,y1,x2,y2;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	int x = x2 - x1;
	int y = y2 - y1;

	int ans = x * y;
	if (ans<0) printf("%d",-ans);
	else printf("%d",ans);

}
