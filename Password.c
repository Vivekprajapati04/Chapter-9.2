#include<stdio.h>
#include<string.h>

main()
{
	char pass[100];
	int i,c_letter=0,s_letter=0,digit=0,special_symbol=0;
	printf("Enter Your Password= ");
	gets(pass);
	if(strlen(pass)>=6)
	{
		for(i=0;pass[i]!='\0';i++)
		{
			if (pass[i]>='A' && pass[i]<='Z')
			{
				c_letter =1;
				
			}
			else if (pass[i]>='a' && pass[i]<='z')
			{
				s_letter =1;	
			}
			else if (pass[i]>='0' && pass[i]<='9')
			{
				digit =1;	
			}
			else
			{
				special_symbol =1;
			}
			
		}
		if(c_letter==1 && s_letter==1 && digit==1 && special_symbol ==1)
		{
			printf("Your password Is strong");
			
		}
		else 
		{
			printf("Your password is Not strong");	
		}
		
	}
	
	else
	{
		printf("Your Password is no longer more then 6 letter. ");
	}
}