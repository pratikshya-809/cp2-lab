//program to convert a string into lowercase using strlwr
#include<stdio.h>
#include<stdio.h>
void stringlwr(char S[])
{
	int i;
	for(i=0;S[i]!=0;i++)
	if(S[i]>=97&&S[i]<=122)
	S[i]=S[i]-32;
}
main()
{
char str[]="hello world";
strlwr(str);
printf("%s",str);
}
