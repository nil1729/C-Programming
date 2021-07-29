#include<string.h>
void CapToSmall(char s[])
{
    int size=strlen(s);
    for(int i=0;i<size;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]+=('a'-'A');
        }
    }
}
int main()
{
    char s[100];
    scanf(" %s",s);
    printf("%s is now ");
    CapToSmall(s);
    printf("%s",s);
    return 0;
}
