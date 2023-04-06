#include<stdio.h>
#include<string.h>

main()
{
	char ch1[60],ch2[60];
	printf("Enter number=");
	scanf("%s",&ch1);
	
	strcpy(ch2,ch1);
	strrev(ch2);
	
	if(strcmp(ch2,ch1)==0)
	{
		printf("Entered number is pelindrome.");
	}
	else
	{
		printf("Entered number is not pelindrome.");
	}
}
