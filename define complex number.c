//Write a program to define a structure for a complex number
#include<stdio.h>
	struct complex
	{
		int r,i;
	};
	int main()
	{
		struct complex c1,c2,c3,c4;
		printf("enter the 1st complex number");
		scanf("%d%d",&c1.r,&c1.i);
		printf("enter 2nd complex no");
		scanf("%d%d",&c2.r,&c2.i);
		c3.r=c1.r+c2.r;
		c3.i=c1.r=c2.i;
		c4.r=c1.r-c2.r;
		c4.r=c4.i-c2.i;
		printf("%d+%di",c3.r,c3.i);
		printf("%d-%di",c4.r,c4.i);
}
