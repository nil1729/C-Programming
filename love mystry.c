#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int q,l[10]={},sum[10]={};
    char s[10][10000];
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%s",s[i]);
    }
    for(int j=0;j<q;j++)
    {
        l[j]=strlen(s[j]);
    }
    for(int i=0;i<q;i++)
    {
        for(int j=0;j<l[i]/2;j++)
            sum[i]=sum[i]+abs(s[i][j]-(s[i][l[i]-1-j]));
    }
    for(int i=0;i<q;i++)
    {
        printf("%d\n",sum[i]);
    }
    return 0;
}
