int main()
{
    int n,count=0;
    scanf("%d",&n);
    char s[100200][3];
    for(int i=1;i<=n;i++)
    {
        scanf("%s",s[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(s[i][0]!=s[i+1][0])
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
