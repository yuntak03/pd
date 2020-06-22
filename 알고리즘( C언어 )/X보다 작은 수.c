#include <stdio.h>
main() {
	int i, s, a, b;
	
	scanf("%d %d",&a,&b);
	int n[a];
	
	for(i=0;i<a;i++) {
		scanf("%d ",&n[i]);
	}
	
	for(i=0;i<a;i++) {
		if(n[i]<b)
			printf("%d ",n[i]);
	}
}