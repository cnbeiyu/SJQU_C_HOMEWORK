/*
   1720078 谈闻卓
   循环输入若干个字符，求其中小写字母的个数和大写字母的个数。
   2018.4.22
 */
#include <stdio.h>
#include <string.h>
int main()
{
	char ch[50];
	int i,j=0,k=0,m=0,n=0;
	printf("请输入一串字符：");
	gets(ch);
	printf("输入的字符为：");
	puts(ch);
	for(i=0; i<strlen(ch); i++)
	{
		if(ch[i]>='0'&&ch[i]<='9')
		{
			j++;
		}
		else if(ch[i]>='a'&&ch[i]<='z')
		{
			k++;
		}
		else if(ch[i]>='A'&&ch[i]<='Z')
		{
			n++;
		}
		else if(ch[i]<'0'||ch[i]>'9'&&ch[i]<'A'||ch[i]>'Z'&&ch[i]<'a'||ch[i]>'z')
		{m++;}
	}
	printf("数字个数为：%d",j);
	if(j!=0)
	{
		printf(",它们是:");
		for(i=0; i<strlen(ch); i++)
		{
			if(ch[i]>='0'&&ch[i]<='9')
			{
				printf("%c",ch[i]);
			}
		}
	}
	printf("\n小写字母个数为:%d",k);
	if(k!=0)
	{
		printf(",它们是:");
		for(i=0; i<strlen(ch); i++)
		{
			if(ch[i]>='a'&&ch[i]<='z')
			{
				printf("%c",ch[i]);
			}
		}
	}
	printf("\n大写字母个数为:%d",n);
	if(n!=0)
	{
		printf(",它们是:");
		for(i=0; i<strlen(ch); i++)
		{
			if(ch[i]>='A'&&ch[i]<='Z')
			{
				printf("%c",ch[i]);
			}
		}
	}
	printf("\n其他字符个数为:%d",m);
	if(m!=0)
	{
		printf(",它们是:");
		for(i=0; i<strlen(ch); i++)
		{
			if(ch[i]<'0'||ch[i]>'9'&&ch[i]<'A'||ch[i]>'Z'&&ch[i]<'a'||ch[i]>'z')
			{printf("%c",ch[i]);}
		}
	}
}
