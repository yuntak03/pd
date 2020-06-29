#include<stdio.h>
main() {
	int n, a, d = 0, c[100] = { 0, }, i;
	
	scanf("%d", &n);
	for (i=0;i<n;i++) {
		scanf("%d", &a);
		if (c[a] == 1)
			d++;
		else
			c[a]++;
	}
	printf("%d\n", d);
}