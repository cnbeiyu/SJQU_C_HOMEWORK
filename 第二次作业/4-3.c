/*
   1720078 谈闻卓
   循环输入若干个整数，求其中正整数的个数。
   2018.4.25
 */
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int arr[10] = {0};
	int num = 0;
	int a=0;
	printf("请输入若干组整数，并以空格分隔:\n");
	while (scanf("%d",&arr[num]) != EOF && getchar() != '\n')
	{
		num++;
	}
	for(int i = 0; i < 10; i++)
	{
		if(arr[i]>0)
		{
			a++;
		}
	}
	printf("这组整数中有%d个整数，其中有%d个正整数,它们分别是:",num+1,a);
	for(int i = 0; i < 10; i++)
	{
		if(arr[i]>0)
		{
			printf("%d ", arr[i]);
		}
	}
}
