#include <stdio.h>
main() {
	int i, n=100, m=-100, s, a;
	
	scanf("%d",&i);
	for(s=0;s<i;s++) {
		scanf("%d", &a);
		if(m<a)
			m=a;
		if(n>a)
			n=a;
	}
	printf("%d %d",n,m);
}