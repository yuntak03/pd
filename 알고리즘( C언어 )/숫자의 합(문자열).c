#include <stdio.h>
#define NO 100
int main(void) {
	int i[NO], a, n;

	scanf("%d",&a);
	int *s = malloc(sizeof(int) * a);
	for(n=0; n<a; n++) {
		i[n]=getche()-'0';
		s=s+i[n];
	}
	printf("\n%d",s);
}