#include<stdio.h>

struct bank
{
	char brname[100];
	char braddr[100];
	int brtel[50];
	char bremail[100];
	char ifsc[50];
	int micr[50];
	int custid[50];
	int account[50];
	char name[100];
	int dob[50];
	char addr[100];
	int cont[50];
	char email[100];
	int accdate[50];
	char nomi[100];
	int depo[100];
	int withd[100];
};
int main()
{
	while(1)
	{
	int n,i;
	printf("					FILL THE FORM TO SHOW BANK ACCOUNT DETAIL\n\n");
	printf("Enter the no. of person to open a account:");
	scanf("%d",&n);
	
	struct bank b[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the branch name:");
		scanf("%s",&b[i].brname);
		
		printf("Enter the branch address:");
		scanf("%s",&b[i].braddr);
		
		printf("Enter the branch telephone no.:");
		scanf("%s",&b[i].brtel);
		
		printf("Enter the branch email id:");
		scanf("%s",&b[i].bremail);
		
		printf("Enter the branch IFSC code:");
		scanf("%s",b[i].ifsc);
		 
		printf("Enter the branch MICR code:");
		scanf("%s",&b[i].micr);
		 
		printf("Enter the %d customer name:",i+1);
		scanf("%s",&b[i].name);
		 
		printf("Enter the %d customer i'd:",i+1);
		scanf("%s",&b[i].custid);
		 
		printf("Enter the %d customer date of birth:",i+1);
		scanf("%s",&b[i].dob);
		 
		printf("Enter the %d customer account number:",i+1);
		scanf("%s",&b[i].account);
		 
		printf("Enter the %d customer address:",i+1);
		scanf("%s",&b[i].addr);
		 
		printf("Enter the %d customer contact no.",i+1);
		scanf("%s",&b[i].cont);
		 
		printf("Enter the %d customer email id:",i+1);
		scanf("%s",&b[i].email);
		 
		printf("Enter the %d customer account opening date:",i+1);
		scanf("%s",&b[i].accdate);
		 
		printf("Enter the %d customer account nominee name:",i+1);
		scanf("%s",&b[i].nomi);
		 
		printf("Enter the %d customer amount deposited:",i+1);
		scanf("%s",&b[i].depo);
		 
//		printf("Enter the %d customer amount withdrawl:",i+1);
//		scanf("%s",&b[i].withd);
		 
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		printf("Branch Name = %s\n",b[i].brname);
		printf("Branch Address = %s\n",b[i].braddr);
		printf("Branch Telephone = %s\n",b[i].brtel);
		printf("Branch Email I'd = %s\n",b[i].bremail);
		printf("Branch IFSC Code = %s\n",b[i].ifsc);
		printf("Branch MICR Code = %s\n",b[i].micr);
		printf("Customer Name = %s\n",b[i].name);
		printf("Customer I'd = %s\n",b[i].custid);
		printf("Customer DOB = %s\n",b[i].dob);
		printf("Customer Account No. = %s\n",b[i].account);
		printf("Customer Address = %s\n",b[i].addr);
		printf("Customer Contact = %s\n",b[i].cont);
		printf("Customer Email I'd = %s\n",b[i].email);
		printf("Customer Account Opening Date = %s\n",b[i].accdate);
		printf("Customer Account Nominee Name = %s\n",b[i].nomi);
		printf("Customer Amount Deposited = %s\n",b[i].depo);
//		printf("Customer Amount Withdrawl = %s\n",b[i].withd);
		printf("\n");
	}
}
	
	return 0;
}
