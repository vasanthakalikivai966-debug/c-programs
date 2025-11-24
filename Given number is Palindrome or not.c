#include<stdio.h>
#include<math.h>
int main()
{
	int original_number,reverse_number=0,temp_number,rem;
	printf("Enter a number:");
	scanf("%d",&original_number);
	//strong original number in temp number
	temp_number=original_number;
	//finding out the reverse of the given number
	while(temp_number!=0)
	{
		int rem=temp_number%10;
		reverse_number=reverse_number*10+rem;
		temp_number=temp_number/10;
	}
	//comparing
	if(original_number==reverse_number) printf("Palindrome");
	else printf("Not a Palindrome");
}
