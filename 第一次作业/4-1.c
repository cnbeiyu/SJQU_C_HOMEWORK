/*
1720078 ̸��׿
����_C�̲�_P117 4-1
����BMI
2018.4.3
*/
#include<stdio.h>
#include<math.h>
void JudgeBMI(double);
void main()
{
 double weight;
 double height;
 printf("���������أ�kg��:");
while (!scanf("%lf",&weight) || weight < 0)
{
  fflush(stdin);
  printf("�������������һ����ֵ:\n");
}
 printf("��������ߣ�m��:");
while (!scanf("%lf",&height) || height < 0)
{
  fflush(stdin);
  printf("�������������һ����ֵ:\n");
}
 double BMI=(double)weight/(height*height);
 printf("���BMIΪ%f.\n",BMI);
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
    printf("�������ָ��������\n" );
  }
  else if (25 <= BMI < 28)
  {
    printf("�������ָ�����ء�\n" );
  }
  else if (BMI >= 28)
  {
    printf("�������ָ�����֡�\n" );
  }
}
