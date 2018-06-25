/*
1720078 谈闻卓
建桥_C教材_P117 4-2
整数相关计算
2018.4.3
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int JudgeNUM(int);
void main()
{
  int num;
  int digit;
  char str[5];
  printf("请输入一个10~1000的整数：\n");
  scanf("%d",&num );
  digit = JudgeNUM(num);
  printf("它的位数是：%d\n",digit);
  switch (digit)
  {
    case 2:
      printf("十位数是:%d\n个位数是:%d\n",num/10,num%10);
      break;
    case 3:
      printf("百位数是:%d\n十位数是:%d\n个位数是:%d\n",num/100,num%100/10,num%10);
      itoa(num,str,10);
      break;

  }
  itoa(num,str,10);
  strrev(str);
  printf("它的逆序是:%s\n",str );
}
int JudgeNUM(int a)   //判断一个数是几位数
{
    int n=0;
    while (a)
    {
        a = a / 10;
        n++;
    }
    return n;

}
