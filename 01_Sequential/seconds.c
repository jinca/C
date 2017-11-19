#include<stdio.h>
void main()
{
	int ns,nh,nm,s;

	printf("Enter a number in seconds, older than 3600:");
	scanf("%d",&ns);

	nh=ns/3600;
	ns=ns-nh*3600;
	nm=ns/60;
	s=ns-nm*60;

	printf("Number in hours %d\n",nh);
	printf("Number in minutes %d\n",nm);
	printf("Number in seconds %d\n",s);
}
