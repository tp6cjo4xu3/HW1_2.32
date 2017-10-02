#include <stdio.h>
#include <stdlib.h>
double a, b,c,d;
int main(void)
{
	printf("請輸入體重(kg)、身高(m):");
	scanf_s("%lf%lf", &a,&b);
	c = a /( b*b);
	printf("%.2lf\n",c );
	system("pause");
	return 0;
}