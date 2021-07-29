#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,l;
    char s[100000];
    scanf("%s",s);
    l=strlen(s);
    for(int i=65;i<=90;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(s[j]==i)
            {
                count++;
            }
        }
    }
    printf("%d",count+1);
    return 0;
}
