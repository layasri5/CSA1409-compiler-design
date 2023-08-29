#include<stdio.h>
int main()
{
	int a,b,choice,ins,counter,res;
	printf("enter the first number:");
	scanf("%d",&a);
	counter=counter+1;
	printf("enter the second number:");
	scanf("%d",&b);
	counter=counter+1;
	printf("1:addition\n 2:subtraction\n 3: multiplication\n 4:division\n");
	printf("enter the choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			res=a+b;
			counter=counter+1;
		    break;
		case 2:
			res=a-b;
			counter=counter+1;
		    break;
		case 3:
			res=a*b;
			counter=counter+1;
		    break;
		case 4:
			res=a/b;
			counter=counter+1;
		    break;
		default:
		break;
	}
	printf("clock cycle is :%d",res);
	printf("\nnumber of instructions:");
	scanf("%d",&ins);
	int performance = ins/counter;
	printf("\nperformance measure is:%d",performance);
	return 0;
}
