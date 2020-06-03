#include <stdio.h>
main() {
	int n, s, i, f;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++) {
		for(s=0;s<(i+1);s++) {
			printf("*");
		}
		printf("\n");
	}
	for(i=n;i>0;i--) {
		for(s=i-1;s>0;s--) {
			printf("*");
		}
		printf("\n");
	}
}