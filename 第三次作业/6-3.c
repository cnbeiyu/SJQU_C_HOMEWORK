#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,N,n=0;
    int a[1000];
    srand(time(NULL));
    printf("������Ҫ���ɵ����ĸ�����");
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
    printf("�±������ֵ��Ϊ�����ĸ���Ϊ��%d��",n);
    return 1;
}
