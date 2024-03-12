#include<stdio.h>
#define max 10000
void fibonacci(int n)
{
	int a=0, b=1,next;
	for(int i=1; i<=n;i++)
	{
		next=a+b;
		a=b;
		b=next;
	}
	printf("%d\n",next);
}
void prime(int n)
{
	int i ,j, flag, count=0;
	for(i=2;i<=max;i++)
	{
		int flag=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				flag==1;
				break;
			}
		}
		if(flag==0)
		{
			if(++count==n)
			{
				printf("%d\t",i);
				break;
			}
		}
	}
}
int main()
{
	int  n;
	printf("ENTER NTH TERM");
	scanf("%d",&n);
	if(n%2==0)
	{
		prime(n/2+1);
	}
	else
	{
		fibonacci(n/2);
	}
}
