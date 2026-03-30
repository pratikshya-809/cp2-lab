//Write a program to swap two numbers using call by reference. 
#include<stdio.h>
void swap(int*a,int*b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
int x=5;
int y=10;
swap(&x,&y);
printf("x=%d y=%d",x,y);
return 0;
}
