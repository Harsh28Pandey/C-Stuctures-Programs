#include<stdio.h>

struct employee
{
	char name[100];
	int dob[100];
	char id[100];
	char addr[100];
	int cont[50];
	char type[100];
	char email[100];
	char app[100];
	int salary[50];
};

int main()
{
	while(1)
	{
	int i,n;
	printf("     					   MICROSOFT CORPORATION PVT LTD\n\n");
	printf("Enter the number of employees:");
	scanf("%d",&n);
	
	struct employee e[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter the name of %d employee:",i+1);
		scanf("%s",&e[i].name);
		
		printf("Enter the Date of birth of %d employee:",i+1);
		scanf("%s",&e[i].dob);
		
		printf("Enter the id of %d employee:",i+1);
		scanf("%s",&e[i].id);
		
		printf("Enter the address of %d employee:",i+1);
		scanf("%s",&e[i].addr);
		
		printf("Enter the contact of %d employee:",i+1);
		scanf("%s",&e[i].cont);
		
		printf("Enter the engineer type of %d employee:",i+1);
		scanf("%s",&e[i].type);
		
		printf("Enter the email id of %d employee:",i+1);
		scanf("%s",&e[i].email);
		
		printf("Enter the %d employee created app:",i+1);
		scanf("%s",&e[i].app);
		
		printf("Enter the salary of %d employee per month:",i+1);
		scanf("%s",&e[i].salary);
		printf("\n");
	}
	printf("     					    DETAILS OF THE EMPLOYEE\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("Name = %s\n",e[i].name);
		printf("Age = %s\n",e[i].dob);
		printf("Employee id = %s\n",e[i].id);
		printf("Address = %s\n",e[i].addr);
		printf("Contact no. = %s\n",e[i].cont);
		printf("Engineer type = %s\n",e[i].type);
		printf("Email id = %s\n",e[i].email);
		printf("Created App = %s\n",e[i].app);
		printf("Salary = %s/per month\n",e[i].salary);
//		printf("Yearly salary = %s\n",e[i].salary);
		printf("\n");
	}
}
	return 0;
}
