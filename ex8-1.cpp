//Write a program to create a structure named Complex and define a function incrComplex() to increment the value of both real and imaginary members by 1
#include<stdio.h>
 struct complex
{
	int real;
	int imaginary;
};
void incrcomplex(struct complex*c){
	c->real+=1;
	c->imaginary+=1;
}
int main(){
struct complex c;
printf("enter real and imaginary member:");
scanf("%d%d",&c.imaginary,&c.real);
incrcomplex(&c);
printf("after increment %d%d",c.real\m,c.imaginary);
return 0;
}

