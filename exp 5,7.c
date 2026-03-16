//Create a program where a pointer to a pointer is used to access and modify a variable of type
#include<stdio.h>
int main(){
	int num=20;
	int *p;
	int **nex;
	p=&num;
	nex=&p;
	printf("value of num=%d",num);
	**nex=19;
	printf("now the value num is=%d",num);
	return;
	
}
