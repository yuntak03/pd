#include <stdio.h>
#define NO 3
#define D 2
main() {
	int i[NO], s[D], n, a, b, c;
	
	for(n=0;n<NO;n++) {
		scanf("%d",&i[n]);
		if(n==0)
			a=i[0];
		if(a>i[n])
			a=i[n];
		if(a<i[n])
			a=a;
	}
	printf("%d\n",a);
	for(n=0;n<D;n++) {
		scanf("%d",&s[n]);
		if(n==0)
			b=s[n];
		if(b>s[n])
			c=s[n];
		else
			c=b;
	}
	printf("%d",a+c-50);
}