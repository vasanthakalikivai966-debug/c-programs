#include<stdio.h>
/*
convert hours to minute and seconds;;;if we enter the value of hour it will give u answer in mins and secs  
*/
int main()
{
	int min,sec,hour;
	printf("enter the value of hour");
	scanf("%d",&hour);
	min=hour*60;
	sec=hour*3600;
	printf("min to hour %d",min);
	printf("sec to hour %d",sec);
	return 0;
}
