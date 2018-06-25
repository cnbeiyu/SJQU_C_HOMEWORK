#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,N,n=0;
    int a[1000];
    srand(time(NULL));
    printf("请输入要生成的数的个数：");
    scanf("%d",&N);
    for(i=0;i<=N-1;i++)
    {
        a[i]=rand()%100;
        if(i%2!=0)
        if(a[i]%2!=0)
        n++;
    }
    for(i=0;i<=N-1;i++)
    {
        printf("array[%d]=%d\n",i,a[i]);
    }
    printf("下标与输出值均为奇数的个数为：%d个",n);
    return 1;
}
