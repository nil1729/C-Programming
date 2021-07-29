#include<stdio.h>
#include<string.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        int count=0;
        char s[100000];
        scanf("%s",s);
        int l=strlen(s);
        s[l]='\0';
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]==s[i+1])
                count++;
        }
        printf("%d",count);
        t--;
    }
    return 0;
}
