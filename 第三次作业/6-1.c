#include<stdio.h>
#include<math.h>
int main()
{
    int i=0;
    float a[19],avg=0,bzc=0;
    while(i<=19)
    {
        printf("请输入第%d个成绩:\n",i+1);
        scanf("%f",&a[i]);
        i++;
    }
    for(i=0;i<=19;i++)
        avg+=a[i];
    avg/=10;
    for(i=0;i<=19;i++)

        bzc=pow(a[i]-avg,2);
    bzc=pow(bzc/20,0.5);
    printf("平均值为：%2.f\n标准差值为：%f",avg,bzc);
    return 0;
}
