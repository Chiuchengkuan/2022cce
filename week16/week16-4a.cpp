#include <stdio.h>
#include <string.h>
int main(){
	char line[200];
	scanf("%s",line);

	int N =strlen(line);
	int bad = 0;
	for(int i=0;i<N;i++){
		if(line[i] != line[N-1-i]) bad=1;
	}

	if(bad==1) printf("NO");
	else printf("YES");
}
