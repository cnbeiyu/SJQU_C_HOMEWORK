#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char s1[100], s2[100], res[50];
    int i = 0, j = 0;
    gets(s1); u
    gets(s2);
    while (s1[i] != ' ')
    {
        if (s1[i] <= 'Z' && s1[i] >= 'A')
        {
            res[j] = s1[i];
            j++;
        }
        else if (s1[i] <= 'z' && s1[i] >= 'a')
        {
            res[j] = s1[i] - 32;
            j++;
        }
        i++;
    }
    i = 0;
    while (s2[i] != ' ')
    {
        if (s2[i] <= 'Z' && s2[2] >= 'A')
        {
            res[j] = s2[i];
            j++;
        }
        else if (s2[i] <= 'z' && s2[i] >= 'a')
        {
            res[j] = s2[i] - 32;
            j++;
        }
        i++;
    }
    res[j] = '\0';
    puts(res);
    return 0;
}

