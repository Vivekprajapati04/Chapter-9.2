



#include<stdio.h>
#include<string.h>

main()
{
	char desred_email[]="admin@gmail.com";
	char desred_password[]= "123456789";
	char email[50],password[50];
	
	printf("Enter Email=");
	scanf("%s",& email);
	printf("Enter Password=");
	scanf("%s",&password);
	
	if(strcmp(desred_email,email)==0 && strcmp(desred_password,password)==0)
	{
		printf("\nLogin Successful...\n");
		
	}
	else 
	{
		printf("\nLogin Failed. Invalid Credentials.\n");
	}
}