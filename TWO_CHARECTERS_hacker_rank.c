#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count_alternating(char s[],char a,char b,int k)
{
    int n=0;
    int last_a=0;
    int last_b=0;
    for(int i=0;i<k;i++)
    {
        if(s[i]==a)
        {
            if(last_a)
                return 0;
            n++;
            last_a=1;
            last_b=0;
        }
        if(s[i]==b)
        {
            if(last_b)
                return 0;
            n++;
            last_a=0;
            last_b=1;
        }
    }
    return n;
}
int main()
{
    char s[2000];
    int m=0,len;
    scanf("%d",&len);
    scanf(" %s",s);
    if(len>1)
    {
        for(char c='a';c<='z';c++)
        {
        for(char d='a';d<='z';d++)
        {
            if(c==d)
                continue;
            int n=count_alternating(s,c,d,len);
            if(n>m)
                m=n;
        }
        }
        printf("%d",m);
    }
    else
        printf("0");
    return 0;
}
