//  program to convert a string to uppercase
#include<stdio.h>
#include<string.h>

/*
void stringupr(char S[])
{
	int i;
	for(i=0;S[i]!=0;i++)
	if(S[i]>=97&&S[i]<=122)
	S[i]=S[i]-32;
}
*/
main()
{
	char str[]="hello world";
	strupr(str);
	printf("%s",str);
}
