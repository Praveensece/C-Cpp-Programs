#include<stdio.h>
struct student
{
	int regno;
	char name[25];
	int m1,m2,m3,m4,m5,m6,total;
	float avg;
}s[2];
void main()
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("Enter the student reg no:");
		scanf("%d",&s[i].regno);
		printf("Enter the name :");
		scanf("%s",s[i].name);
		printf("Enter the marks of six subjects :");
		scanf("%d%d%d%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5,&s[i].m6);
	}
	printf("The outputs are :");
	for(i=0;i<2;i++)
	{
		s[i].total=(s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5+s[i].m6);
		s[i].avg=s[i].total/6.0;
	}
	for(i=0;i<2;i++)
	{
		printf("%d\n",s[i].total);
		printf("%f\n",s[i].avg);
	}
}
