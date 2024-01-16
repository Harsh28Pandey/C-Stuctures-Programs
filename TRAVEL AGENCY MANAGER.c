#include<stdio.h>
struct driver
{
	char name[34];
	char dlno[35];
	char route[54];
	int kms[20];
};
int main()
{
	int i,n;
	printf("Enter the no. of drivers:");
	scanf("%d",&n);
	printf("\n");
	struct driver s[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter the name of %d driver:",i);
		scanf("%s",&s[i].name);
		printf("Enter the dlno of %d driver:",i);
		scanf("%s",&s[i].dlno);
		printf("Enter the route of %d driver:",i);
		scanf("%s",&s[i].route);
		printf("Enter the kms of %d driver:",i);
		scanf("%s",&s[i].kms);
		printf("\n");
	}
	printf("*****Details of the driver*****\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("Name = %s\n",s[i].name);
		printf("Driving lisence = %s\n",s[i].dlno);
		printf("Route = %s\n",s[i].route);
		printf("Kms = %s\n",s[i].kms);
		printf("\n");
	}
	return 0;
}
