#include<stdio.h>
#include<stdlib.h>
#define size 100
int a[size],n=5;
void create()
{
	int i,n;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the array element");
	for(i=0;i<=n;i++)
	scanf("%d",&a[i]);
}
void insert()
{
	int i,pos,element;
	printf("enter the element of position");
	scanf("%d %d",&pos,&element);
	for(i=n-1;i>=pos;i--)
	a[i]=a[i-1];
	a[pos]=element;
}
void dele()
{
	int i,pos;
	printf("enter the element of position");
	scanf("%d",&pos);
	for(i=pos;i<=n-1;i++)
	a[i]=a[i+1];
}
void display()
{
	int i;
	printf("the elements are =");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
int main()
{
	int choice;
	do{
		printf("main menu\n");
		printf("\n 1.create \n 2.insert \n 3.dele \n 4.display\n 5.exit");
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:create();break;
			case 2:insert();break;
			case 3:dele();break;
			case 4:display();break;
			case 5:exit(0);
			default:
				printf("invalid input");
			}
		}
		while(choice>0 && choice<=5);
}
