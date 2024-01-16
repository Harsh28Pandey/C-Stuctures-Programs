#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	int marks;
	char fav_char;
	char name[34];
}harry,ravi,shubham;

int main()
{
//	struct student harry,ravi,shubham;
	
	harry.id=1;
	ravi.id=2;
	shubham.id=3;
	
	harry.marks=466;
	ravi.marks=470;
	shubham.marks=485;
	
	harry.fav_char='H';
	ravi.fav_char='R';
	shubham.fav_char='S';
	
	printf("Harry Id is:%d\n",harry.id);
	printf("Harry got %d marks\n",harry.marks);
	printf("Harry favorite character is:%c\n",harry.fav_char);
	strcpy(harry.name, "Harry Potter");
	printf("Harry name is:%s\n",harry.name);
	printf("\n");
	
	printf("Ravi Id is:%d\n",ravi.id);
	printf("Ravi got %d marks\n",ravi.marks);
	printf("Ravi favorite character is:%c\n",ravi.fav_char);
	strcpy(ravi.name, "Ravi Yadav");
	printf("Harry name is:%s\n",ravi.name);
	printf("\n");
	
	printf("Shubham Id is:%d\n",shubham.id);
	printf("Shubham got %d marks\n",shubham.marks);
	printf("Shubham favorite character is:%c\n",shubham.fav_char);
	strcpy(shubham.name, "Shubham Kumar");
	printf("Harry name is:%s\n",shubham.name);
	
//	strcpy(harry.name,"Harry Potter Student of the year");
//	printf("Harry got %d marks\n",harry.marks);
//	printf("Ravi got %d marks\n",ravi.marks);
//	printf("Shubham got %d marks\n",shubham.marks);
//	printf("harry's name is:%s\n",harry.name);
	return 0;
}
