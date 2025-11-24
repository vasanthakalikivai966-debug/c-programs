#include<stdio.h>
int main()
{
	double a,b,c,discriment,root1,root2,realpart,imagpart;
	printf("Enter coefficients a,b and c:");
		scanf("%lf%lf%f",&a,&b,&c);
		discriment=b*b-4*a*c;
		//condition for real and different roots
		if(discriminant>0)
		{
			root1=(-b+sqrt(discriminant))/(2*a);
			root2=(-b-sqrt(discriminant))/(2*a);
			printf("root1=%.2lf and root2=%.2lf",root1,root2);
		}
		//condition for real and equal roots
		else if(discriminant==0)
		{
			root1=root2=-b/(2*a);
			printf("root1=root2=%.2lf;",root1);
		}
		//if roots are not real
		else 
		{
		realpart=-b/(2*a);
		imagpart=sqrt(-discriminant)/(2*a);
		printf("root1=%.2lf+%.2lf: and root2=%.2lf-%.2lf:",realpart,imagpart,realpart,imagpart);	
		}
	return 0;	
}
