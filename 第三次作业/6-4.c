#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a[50],i,s,b[50],j=0,pa,k;
    int sum=0;
    int avg;
    srand(time(NULL));
    for(i=0;i<50;i++)
    {
        a[i]=rand()%90+10;
        //s+=a[i];
    }
     for(i=0;i<=50-1;i++)
    {
        printf("array[%d]=%d\n",i,a[i]);
        sum=sum+a[i];
    }
    //printf("%d\n",s);
    avg=sum/50;
    printf("平均值是:%d\n",avg);
    for(i=0;i<50;i++)
    {
       //printf("%d\n",a[i]);
        if(a[i]>avg && ((a[i]/10)==5||(a[i]%10)==5))
           // if((a[i]-5)%10==0||a[i]/10==5)
        {
            b[j]=a[i];
            j++;
            printf("b[%d]=%d\n",j,a[i]);
        }
    }
        k=j;
    printf("排序后的数组是:");
    if(j!=0)
        {
        for(i=0;i<k;i++)
        {
            for(j=1;j<k;j++)
                {
                    if(b[j]>b[j-1])
                    {
                        pa=b[j];
                        b[j]=b[j-1];
                        b[j-1]=pa;
                    }
                }
        }
        for(j=0;j<k;j++)
            printf("%d ",b[j]);
        }
        return 0;
}
