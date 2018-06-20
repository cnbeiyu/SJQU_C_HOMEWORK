#include<stdio.h>
int getLastBit(int number)//定义取末位函数
{
	return number % 10;
}

int main(int argc, char const *argv[])
{
	int n, i, res, num;
	printf("please enter n:");
	scanf("%d", &n);
	res = 0;
	printf("please enter %d number:\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		res += getLastBit(num);
		res *= 10;
	}
	printf("res = %d", res / 10);

	return 0;
}