#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x, a, i = 0, n = 0;
	printf("x=");
	scanf("%d", &x);
	printf("a=");
	scanf("%d", &a);
	while (x / 10 != 0)
	{
		//printf("%d\n", a % (10 ^ n));
		i = x % 10;
		if (i == a)
			n++;
		x /= 10;
	}
	if (x == a)
		n++;
	printf("n=%d\n", n);
	return 0;
}