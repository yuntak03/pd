#include <stdio.h>
main() {
	int i,s,m=-100,mn=100,p=0;
	
	for(i=0;i<3;i++) {
		scanf("%d",&s);
		if(i==2) {
			if(s<=m)
				p=s;
			if(s<=mn)
				p=mn;
			if(s>=m)
				p=m;
			break;
		}
		if(s>=m)
			m=s;
		if(s<=mn)
			mn=s;
	}
	printf("%d",p);
}