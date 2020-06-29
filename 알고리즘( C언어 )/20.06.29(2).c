#include <stdio.h>
main() {
	int a, b, v, i, c, t;
	
	scanf("%d %d %d",&a,&b,&v);
	for(i=0;i<v;i++) {
		t=t+a;
		c++;
		if(t>=v)
			break;
		else 
			t=t-b;
	}
	printf("%d",c);
}