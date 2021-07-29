int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n;
        scanf("%d",&n);
        char s[200];
        scanf(" %s",s);
        int count[26]={},cnt=0;
        for(int i='A';i<='Z';i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[j]==i)
                {
                    count[i-'A']++;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='_')
                cnt++;
        }
        if(cnt!=0)
        {
            int flag=0;
            for(int i=0;i<26;i++)
            {
                if(count[i]==1)
                    flag++;
            }
            if(flag==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            int flag=0;
            for(int i=0;i<26;i++)
            {
                if(count[i]==1)
                    flag++;
            }
            if(flag==0)
            {
                int check=0;
                for(int i=1;i<n-1;i++)
                {
                    if(s[i+1]!=s[i]&&s[i-1]!=s[i])
                        check++;
                }
                if(check==0)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
