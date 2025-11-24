#include<stdio.h>
int max_four(int,int,int,int);
int max_four(int a,int b,int c,int d)
{
	if(a>b &&a>c && a>d)
	return a;
	else if(b>a && b>c && b>d)
	return b;
	else if(c>a && c>b && c>d)
	return c;
	else
	return d;
}
void main()
{
	int a,b,c,d;
	printf("Enter 4 numbers:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int max=max_four(a,b,c,d);
	printf("\n Max=%d",max);
}
