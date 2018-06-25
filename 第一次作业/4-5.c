/*
1720078 谈闻卓
建桥_C教材_P118 4-5
计算出租车费用
2018.4.3
*/
#include <stdio.h>
 int main()
{

  double mile,price;
  printf("请输入行驶里程:\n" );
  while (!scanf("%lf",&mile) || mile < 0)
  {
    fflush(stdin);
    printf("输入错误，请输入一个数值:\n");
  }
  if (mile<=3)
      price=14;
  else if (mile>3 && mile<=15)
      price=14+2.5*(mile-3);
  else if (mile>15)
        price=65+3.6*(mile-15);
  printf("应支付的车费为:%.0f\n",price);
}
