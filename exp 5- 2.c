//explain how you can use a pointer to acess an dprint element of an integer array
#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	 int*p=arr;
	int i;
	for(i=0;i<4;i++)
	*(p+i)=*(p+i)*10;
	for(i=0;i,4;i++)
	printf("\n%d",*p=i);
return 0;
}

