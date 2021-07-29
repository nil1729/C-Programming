int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
    char s[200];
    scanf("%s",s);
    int flag=0;
    for(int i=0;i<=n-11;i++)
    {
        if(s[i]=='8')
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    }
    return 0;
}
