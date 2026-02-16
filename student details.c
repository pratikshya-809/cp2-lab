//Wap program to define a structure for a student contaning fields for name ,rollno,and marks input and display the result
#include<stdio.h>
int main()
{
	struct strudent
	{
		char name[30];
		char sicno[10];
		int rollno;
		float cgpa;
	}
	student main()
	{
		student s1={"abc""25bes26""15""8"};
		student s2;
		printf("enter student details");
		gets(s2.name);
		scanf("%s%d%f"&s2.sicno.&s2.rollno,&s2.cgpa);
		printf("name:%s\nsicno:%s\nrollno:%din cgpa:%f",s1.name,s1.sicno,s1.rollno,s1.cgpa,s2.name);
	
	}
} 
