/*
1720078 ̸��׿
����_C�̲�_P118 4-5
������⳵����
2018.4.3
*/
#include <stdio.h>
 int main()
{

  double mile,price;
  printf("��������ʻ���:\n" );
  while (!scanf("%lf",&mile) || mile < 0)
  {
    fflush(stdin);
    printf("�������������һ����ֵ:\n");
  }
  if (mile<=3)
      price=14;
  else if (mile>3 && mile<=15)
      price=14+2.5*(mile-3);
  else if (mile>15)
        price=65+3.6*(mile-15);
  printf("Ӧ֧���ĳ���Ϊ:%.0f\n",price);
}
