//Create a program to illustrate the use of pointers with character variables
#include<stdio.h>
int main()
{
	char ch;
	char*ptr;
	printf("enter a character:");
	scanf("%c",&ch);
	ptr=&ch;
	printf("character enter=%c\n",ch);
	printf("character using pointer=%c\n",*ptr);
	return 0;
}
