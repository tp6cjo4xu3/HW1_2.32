#include <stdio.h>
#include <stdlib.h>
double a, b,c,d;
int main(void)
{
	printf("�п�J�魫(kg)�B����(m):");
	scanf_s("%lf%lf", &a,&b);
	c = a /( b*b);
	printf("%.2lf\n",c );
	system("pause");
	return 0;
}