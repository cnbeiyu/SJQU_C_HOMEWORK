#include <stdio.h>
int main()
{
    int num[20],num_output[20],i,j=0,n,sign,nout=0;
    printf("输入n的值：");
    scanf("%d",&n);
    printf("输入n个数：\n");
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    printf("这其中互不相同的数有：");
	for(i=0;i<n;i++)
	{
		sign=0;
		for(j=0;j<nout;j++)
		{
			if(num[i]==num_output[j])
			{
				sign=1;
				break;
			}
		}
		if(sign==0)
		{
			num_output[nout]=num[i];
			nout++;
		}
	}
	for(i=0;i<nout;i++)
		printf("%d ",num_output[i]);
	return 0;
}
