#include<stdio.h>
int main()
{
	int fact=1,i,number;
	printf("enter the number");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		fact=fact*i;
	}
		printf("factorial of %d is:%d",number,fact);
	
	return 0;
}
