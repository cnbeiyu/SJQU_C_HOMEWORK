#include<stdio.h>
int getCelsius(int f)//定义温度转换函数
{
    int celsius;
    celsius = (f - 32) / 1.8;
    return celsius;
}

int main(int argc, char const *argv[])
{
	int fahr;
	printf("input fahr:");
	while (!scanf("%d",&fahr))//控制输入的为数字
  	{
    	fflush(stdin);
    	printf("please enter a number:\n");
 	}
	printf("fahr=%d,celsius=%d\n",fahr,getCelsius(fahr));
	return 0;
}