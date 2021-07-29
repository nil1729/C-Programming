int main()
{
    char s[200],t[200];
    scanf("%s%s",s,t);
    int x=strlen(s);
    int y=strlen(t);
    for(int i=0;i<x;i++)
    {
        if(s[i]!=t[y-1-i])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
