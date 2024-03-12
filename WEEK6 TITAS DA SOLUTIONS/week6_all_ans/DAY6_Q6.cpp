#include<stdio.h>
#include<string.h>
int main()
{
	char str[76], temp[60],fin[89];
	int i,j=0;
	printf("ENTER A STRING\n");
	gets(str);
	
	///////////////removing other except alphabet-----------------------///////////////////////////
	for(i=0; i<strlen(str);i++)
	{
		if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
		{
			temp[j++]=str[i];
		}
	}
	puts(temp);
	for(i=0;i<strlen(temp);i++)
	{
		fin[i]=temp[i]-32;
	}
	puts(fin);
	/////////////check string is palindrome or not---------------------////////////////////////
	int l=0, h=strlen(fin)-1;
	while(l<h)
	{
		if(fin[l++]!=fin[h--])
		{
			printf("STRING IS NOT PLAINDROME\n");
		}
		else
		{
				printf("%s is palindrome",fin);
		}
	}

}
