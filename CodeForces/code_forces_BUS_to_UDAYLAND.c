int main()
{
    int n,flag=0;
    scanf("%d",&n);
    char s[2000][10];
    for(int i=1;i<=n;i++)
    {
        scanf("%s",s[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(s[i][0]=='O' && s[i][1]=='O')
        {
            flag++;
            s[i][0]='+';
            s[i][1]='+';
            printf("YES\n");
            break;
        }
        if(s[i][3]=='O' && s[i][4]=='O')
        {
            flag++;
            s[i][3]='+';
            s[i][4]='+';
            printf("YES\n");
            break;
        }
    }
    if(flag==0)
        printf("NO");
    else
    {
        for(int i=1;i<=n;i++)
        {
            printf("%s\n",s[i]);
        }
    }
    return 0;
}
