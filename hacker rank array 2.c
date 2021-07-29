#include<string.h>
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char s[10000],h[]="hackerrank";
        int res=0;
        scanf("%s",s);
        for(int j=0;j<strlen(s);j++)
        {
            if(res<strlen(h) &&h[res]==s[j])
                res++;
        }
        if(res==strlen(h))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
