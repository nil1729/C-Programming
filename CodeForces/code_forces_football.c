int main()
{
    char s[200];
    scanf("%s",s);
    int n=strlen(s),flag=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1]&&s[i]==s[i+2]&&s[i]==s[i+3]&&s[i]==s[i+4]&&s[i]==s[i+5]&&s[i]==s[i+6])
        {
            flag++;
            printf("YES");
            break;
        }
    }
    if(flag==0)
    {
        printf("NO");
    }
    return 0;
}
