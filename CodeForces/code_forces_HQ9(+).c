int main()
{
    char s[200];
    scanf("%[^\n]%*c",s);
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='H')
        {
            printf("YES");
            return 0;
        }
        if(s[i]=='Q')
        {
            printf("YES");
            return 0;
        }
        if(s[i]=='9')
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
