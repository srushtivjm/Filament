#include<stdio.h>
#include<string.h>

main()
{
	char email[60]="srushti@.com";
	char password[60]="srushti#7mine";
	char uemail[60];
	char upassword[60];
	
	printf("Enter email ID=");
	scanf("%s",&uemail);
	printf("Enter password=");
	scanf("%s",&upassword);
	
	if(strcmp(email,uemail)==0 && strcmp(password,upassword)==0)
	{
		printf("Login successfull.");
	}
	else 
	{
		printf("please check your email or password.");
	}
/*	strcpy(email,usre`s_email);
	strcpy(password,user`s_password);
	
	if(strcmp(email,user`s_email)==0 && strcmp(pssword,user`s_assword))
	{
	
	if(email==user`s_email)
	{
		if(password==user`s_password)
		{
			printf("password is correct.");
		}
		else
		{
			printf("Password is not correct.");
		}
		printf("emailis correct.");
	}
	else{
		
	}
}*/
}
