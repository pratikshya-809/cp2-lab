//Define a function swapDistance() for the structure defined in question no.2 to swap the content of two Distance variables. 
#include<stdio.h>
struct distance{
	int km;
	int m;
	int cm;
};
void swapdistance(struct distance *d1,struct distance *d2){
	int temp;
	temp=d1->km;
	d1->km= d2->m;
	d2->m=temp;
}
int main(){
	struct distance d1,d2;
	printf("first distance km m cm");
	scanf("%d%d%d",&d1.km,&d1.m,&d1.cm);
	printf("second distance km m cm");
	scanf("%d%d%d",&d2.km,&d2.m,&d2.cm);
	swapdistance(&d1,&d2);
	printf("after swaping:\n");
	printf("distance1:%dkm%dm%dcm\n",d1.km,d1.m,d1.cm);
	printf("distance2:%dkm%dm%dcm",d2.km,d2.m,d2.cm);
	return 0;
}
	

