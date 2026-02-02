//Write a program to reverse a given string and display it
#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	printf("enter a string");
	gets(string);
	strrev(string);
	printf("%s",string);
	
}
