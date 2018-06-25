/*
1720078 谈闻卓
建桥_C教材_P117 4-1
计算BMI
2018.4.3
*/
#include<stdio.h>
#include<math.h>
void JudgeBMI(double);
void main()
{
 double weight;
 double height;
 printf("请输入体重（kg）:");
while (!scanf("%lf",&weight) || weight < 0)
{
  fflush(stdin);
  printf("输入错误，请输入一个数值:\n");
}
 printf("请输入身高（m）:");
while (!scanf("%lf",&height) || height < 0)
{
  fflush(stdin);
  printf("输入错误，请输入一个数值:\n");
}
 double BMI=(double)weight/(height*height);
 printf("你的BMI为%f.\n",BMI);
 JudgeBMI(BMI);
}


void JudgeBMI(double BMI)
{
  if (BMI < 18.0)
  {
    if(BMI < 15.0)
      printf(, );
  }
  else if (18 <= BMI < 25)
  {
    printf("你的体重指数正常。\n" );
  }
  else if (25 <= BMI < 28)
  {
    printf("你的体重指数超重。\n" );
  }
  else if (BMI >= 28)
  {
    printf("你的体重指数肥胖。\n" );
  }
}
