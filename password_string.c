#include<stdio.h>

main()

{
	int i;
	char password[100];
	printf("Create a Password :- ");
	
	gets(password);
	
	printf("Your Password Length is %d\n",strlen(password));
	
	
	
	if(strlen(password)>=6)
	{
		for(i=0;password[i]!=NULL;i++)
		{
		
	
	    if(password>='a' && password<='z')
	    {
		    if(password>='0' && password<='9')
		    {
				if(password=='!',
				password=='@',
				password=='#',
				password=='$',
				password=='*',
				password=='&',
				password=='_')
				{
				printf("Your Password is Generated");
		    	}
				else
				{
				printf("Your Password is not Generated");
				}
		    }
	    }
       }
    }
	else
	{
		printf("Your Password must contain atleast 6 characters");
	}
		
}
