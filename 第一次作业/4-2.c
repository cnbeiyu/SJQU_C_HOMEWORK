/*
1720078 ̸��׿
����_C�̲�_P117 4-2
������ؼ���
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
  printf("������һ��10~1000��������\n");
  scanf("%d",&num );
  digit = JudgeNUM(num);
  printf("����λ���ǣ�%d\n",digit);
  switch (digit)
  {
    case 2:
      printf("ʮλ����:%d\n��λ����:%d\n",num/10,num%10);
      break;
    case 3:
      printf("��λ����:%d\nʮλ����:%d\n��λ����:%d\n",num/100,num%100/10,num%10);
      itoa(num,str,10);
      break;

  }
  itoa(num,str,10);
  strrev(str);
  printf("����������:%s\n",str );
}
int JudgeNUM(int a)   //�ж�һ�����Ǽ�λ��
{
    int n=0;
    while (a)
    {
        a = a / 10;
        n++;
    }
    return n;

}
