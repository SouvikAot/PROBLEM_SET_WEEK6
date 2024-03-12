#include<stdio.h>
#include<string.h>
void reverse();
int main()
{
	printf("ENTER A STRING\n");
	reverse();
}
void reverse()
{
    char ch;
	scanf("%c",&ch);
	if(ch!='\n')
	{
			reverse();
			printf("%c",ch);
	}

}
