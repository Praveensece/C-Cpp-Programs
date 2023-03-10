#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
	printf("The maximum limits for signed integer : %d",SHRT_MAX);
	printf("\nThe minimum limits for signed integer : %d",SHRT_MIN);
	printf("\nThe maximum limits for signed character : %d",SCHAR_MAX);
	printf("\nThe minimum limits for signed character : %d",SCHAR_MIN);
	printf("\nThe maximum range for unsigned character : %d",UCHAR_MAX);
	printf("\nThe maximum limits for float : %d",FLT_MAX);
	printf("\nThe minimum limits for float : %d",FLT_MIN);
	return 0;
}
