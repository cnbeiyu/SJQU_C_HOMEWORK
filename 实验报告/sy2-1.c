#include <stdio.h>
int main(int argc, char const *argv[])
{
	int score;
	printf("score=");
	while (!scanf("%d", &score))//控制输入的为数字
	{
		fflush(stdin);
		printf("please enter a number:\n");
	}
	if (score >= 90)
		printf("grade=A\n");
	else if (score < 90 && score >= 80)
		printf("grade=B\n");
	else if (score < 80 && score >= 70)
		printf("grade=C\n");
	else if (score < 70 && score >= 60)
		printf("grade=D\n");
	else if (score < 60 )
		printf("grade=E\n");
	return 0;
}