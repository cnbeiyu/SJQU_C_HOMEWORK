/*
   1720078 ̸��׿
   ��s=1+1/2+1/3+1/4+��.+1/100�Ľ����
   2018.4.22
 */
#include <stdio.h>
void main()
{

	double Res = 0;
	for(int i=1; i<=100; i++)
	{
		Res = Res + (1 / (double) i);
	}
	printf("s=1+1/2+1/3+1/4+��.+1/100�Ľ����:%lf\n", Res);
}
