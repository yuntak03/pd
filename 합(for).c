#include <stdio.h>
main() {
	int i, n, s=0;
	
	scanf("%d",&i);
	for(n=0;n<i;n++) {
		s=s+(n+1);
	}
	printf("%d",s);
}