#include<stdio.h>
#define N 10
int main()
{
    int i=0,maxn,minn,jmax=0,jmin=0;
    int a[N];
    int num;
    printf("请输入10个整数:");
    while(i<=9)
    {
        scanf("%d",&a[i]);
        i++;
    }
    maxn=a[0];
    minn=a[0];
    for(i=0;i<=9;i++)
    {
        if(a[i]>maxn)
        {
            maxn=a[i];
            jmax=i;
        }
        if(a[i]<minn)
        {
            minn=a[i];
            jmin=i;
        }
    }
    a[jmax]=minn;
    a[jmin]=maxn;
    printf("交换后的数组是:");
    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
