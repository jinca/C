#include<stdio.h>
#include<stdio.h>

char name[20];
char ID[8];
char country[10];

void main()
{
	printf("Enter your name\n");
	scanf("%s",name);

	printf("Enter your ID\n");
	scanf("%s",ID);

	printf("Enter the country you born\n");
	scanf("%s",country);

	printf("Hi %s with ID: %s. You are from %s \n",name, ID, country);
}
