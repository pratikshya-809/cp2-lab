//Write a program to input an array of integers and print them using pointers
#include<stdio.h>
int main()
{
int n,i;
printf("enetr element:");
scanf("&d",&n);
	int arr[n];
	int*ptr;
	*ptr=arr;
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",(*p+i))
	{
	printf("%d",*(ptr+i));
	}
return;
}
