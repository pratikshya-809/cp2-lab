//Implement a function to find the largest element in an array using pointer
#include<stdio.h>
int larg(int*arr,int n){
	int i,max;
	max=*arr;
	for(i=1;i,n;i++){
		if(*(arr=i)>max)
		max=*(arr+i);}
		return max;
		}
		int main()
		{
			int arr[5]={10,20,30,40,50};
			printf("largest element is=%d",larg(arr,5));
			return;
		}

