#include<stdio.h>
#include<string.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int count[130]={};
    char s[n][100];
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    for(int i='a';i<='z';i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<strlen(s[j]);k++)
            {
                if(s[j][k]==i)
                {
                    count[i]++;
                    break;
                }
            }
        }
    }
    for(int i=97;i<123;i++)
    {
        if(count[i]==n)
            sum++;
    }
    printf("%d",sum);
    return 0;
}
