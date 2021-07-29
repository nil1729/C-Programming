#include<stdio.h>
#include<string.h>
int main()
{
    char s[110];
    scanf("%s",s);
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        else
        {
            s[i]=s[i]-32;
        }
    }
    printf("%s",s);
    return 0;
}
