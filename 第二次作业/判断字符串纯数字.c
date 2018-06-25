#include <stdio.h>
#include <stdlib.h>

void main()
{
int arr[10] = {0};
int num = 0;
int a=0;
int b;
char str[25];
while (scanf("%d",&arr[num]) != EOF && getchar() != '\n')
{
    num++;
}
for(int i = 0; i < 10; i++)
{
  itoa(arr[i],str,10);
  printf("%s\n",str );
  // b=strspn(str,"0123456789")==strlen(str);
  // printf("%d\n",b);
}
for(int i = 0; i < 10; i++)
{
  if(arr[i]>0)
  {
    a++;
  }
}
printf("%d\n",num+1);
printf("这组整数中有%d个整数，其中有%d个正整数,它们分别是:",num+1,a);
for(int i = 0; i < 10; i++)
{
  if(arr[i]>0)
  {
    printf("%d ", arr[i]);
  }
}
}
