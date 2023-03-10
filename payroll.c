#include<stdio.h>
struct employee
{
	int empid;
	double basic,hra,da;
	double pf,lic,dd;
	double gross,net;
}e[10];
void main()
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("Enter the employ id :");
		scanf("%d",&e[i].empid);
		printf("Enter the basic pay :");
		scanf("%d",&e[i].basic);
	}
	for(i=0;i<2;i++)
	{
		e[i].hra=(0.2)*e[i].basic;
		e[i].da=(0.75)*e[i].basic;
		e[i].pf=(0.12)*e[i].basic;
		e[i].lic=(0.1)*e[i].basic;
		e[i].dd=e[i].pf+e[i].lic;
		e[i].gross=e[i].basic+e[i].hra+e[i].da;
		e[i].net=e[i].gross-e[i].dd;
	}
	printf("The outputs are :");
	for(i=0;i<2;i++)
	{
		printf("\n%d",e[i].hra);
		printf("\n%d",e[i].da);
		printf("\n%d",e[i].pf);
		printf("\n%d",e[i].lic);
		printf("\n%d",e[i].dd);
		printf("\n%d",e[i].gross);
		printf("\n%d",e[i].net);
		
	}
}
