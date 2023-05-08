#include<stdio.h>

main()

{
	char password[100];
	printf("Create a Password :- ");
	
	gets(password);
	
	printf("Your Password Length is %d\n",strlen(password));
	if(strlen(password)>=6)
	{
		printf("Your Password has been Created Successfully");
	}
	
	else
	{
		printf("Password must contain atleast 6 characters");
	}
	
}
