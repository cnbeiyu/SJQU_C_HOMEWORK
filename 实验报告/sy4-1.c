#include<stdio.h>
int read(int arr[])
{
	FILE *fp;
	int i = 0;
	if ((fp = fopen("data.txt", "r")) == NULL)
	{
		printf("The file can not be opened.\n");
	}
	while (!feof(fp)) {
		fscanf(fp, "%d", &arr[i]);
		i++;
	}
	fclose(fp);
}
int getMax(int arr[], int n, int *pm)
{
	int i;
	* pm = 0;
	while (arr[n] != 0)
		n++;
	for (i = 0; i < n; i++)
	{
		if (arr[*pm] < arr[i])
			*pm = i;
	}
	return arr[*pm];
}
int main(int argc, char const *argv[])
{
	int a[100];
	memset(a, '\0', sizeof(a));
	int n, max, index;
	n = read(a);
	max = getMax(a, n, &index);
	printf("max=%d,maxindex=%d\n", max, index);
	return 0;
}
