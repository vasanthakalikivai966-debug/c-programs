#include<stdio.h>
int main()
{
	int no_row,c=1,blk,i,j;
	printf("Input number of row:");
	scanf("%d",&no_row);
	//outer loop for iterating over rows
	for(i=0;i<no_row;i++)
	{
		//inner loop for printing spaces
		for(blk=1;blk<=no_row-i;blk++)
		printf(" ");
		//Inner loop for generating and printing pattern.
		for(j=0;j<=i;j++)
		{
			if(j==0||i==0)//if its the first column or first  row,set c to 1.
			c=1;
			else
			c=c*(i-j+1)/j;//calculate the next pattern value.
			printf("%4d",c);//print the pattern value.
		}
		printf("\n");//Move to next row.
	}
	return 0;
}
