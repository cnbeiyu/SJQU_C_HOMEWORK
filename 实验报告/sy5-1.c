#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char ch[100];
    char res[100];
    int i = 0;
    int len = 0;
    gets(ch);
    for (i = 0; i < strlen(ch); i++) {
        if (ch[i] <= 'z' && ch[i] >= 'a')
        {
            res[len] = ch[i];
            len++;
        }
        else if (ch[i] <= 'Z' && ch[i] >= 'A')
        {
            res[len] = ch[i] + 32;
            len++;
        }
    }
    res[len] = '\0';
    puts(res);
    return 0;
}