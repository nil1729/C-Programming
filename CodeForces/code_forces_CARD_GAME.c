int main()
{
    char s1[5],s[30];
    scanf("%s",s1);
    scanf(" %[^\n]%*c",s);
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]==s1[0] || s[i]==s1[1])
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
