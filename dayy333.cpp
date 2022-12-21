#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int*)malloc(sizeof(int));
	printf("enter a number");
	scanf("%d",p);
	printf("entered value is %d",*p);
	free(p);
}
