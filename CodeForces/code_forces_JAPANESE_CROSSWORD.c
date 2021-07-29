int main()
{
    int n,count=0;
    scanf("%d",&n);
    char s[120];
    scanf(" %s",s);
    if(s[n-1]=='B')
    {
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B' && s[i+1]=='W')
            count++;
    }
    count++;
    }
    if(s[n-1]=='B')
    {
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B' && s[i+1]=='W')
            count++;
    }
    }
    if(count==0)
    {
        if(s[n-1]=='B' && s[0]=='B')
            count++;
    }
    printf("%d\n",count);
    int i=0,cnt;
    while(i<n)
    {
        if(s[i]=='B')
        {
            cnt=1;
            for(int j=i+1;j<n;j++)
            {
                if(s[j]=='B')
                {
                    cnt++;
                    i++;
                }
                if(s[j]=='W')
                {
                    printf("%d ",cnt);
                    i++;
                    break;
                }
            }
        }
        i++;
    }
    if(s[n-1]=='B')
        printf("%d",cnt);
    return 0;
}
