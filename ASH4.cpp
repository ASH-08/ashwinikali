#include<stdio.h>     //prgm to print fibbonacci series numbers
int main()
{
	int n1=0,n2=1,n3,num,i;      //variable declaration
	printf("Enter the number of terms\n",num);
	scanf("%d",&num);
	printf("Fibbonacci series terms are:%d,%d,",n1,n2);//print 1st two numbers that is 0&1
	for(i=2;i<=num;i++)
	{                                //loop starts from 2 because 0 and 1 are printed before
		n3=n1+n2;
		printf("%d,",n3);
		n1=n2;                       //n1 and n2 are stored with new values
		n2=n3;
	}
	return 0;
}

