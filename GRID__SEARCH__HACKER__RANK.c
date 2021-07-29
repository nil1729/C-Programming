int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n,r,c;
        char s[1005][1005],p[1005][1005];
        scanf("%d %d",&m,&n);
        for(int i=0;i<m;i++)
            scanf("%s",s[i]);
        scanf("%d %d",&r,&c);
        for(int i=0;i<r;i++)
            scanf("%s",p[i]);
        int flag=0;
        for(int i=0;i<m;i++)
        {
            flag=0;
            for(int j=0;j<n;j++)
            {
                int count=0;
                if(s[i][j]==p[0][0])
                {
                    int test=0;
                    for(int e=0;e<r;e++)
                    {
                        for(int f=0;f<c;f++)
                        {
                            if(((i+e)<=(m-1)) && ((j+f)<=(n-1)))
                            {
                                if(s[i+e][j+f]==p[e][f])
                                    count++;
                                else
                                    test=1;
                                if(count==r*c)
                                {
                                    flag=1;
                                    break;
                                }
                            }
                            if(flag||test)
                                break;
                        }
                        if(flag||test)
                            break;
                    }

                }
                if(flag)
                    break;
            }
            if(flag)
                break;
        }
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
