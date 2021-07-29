int main()
{
    int t;
    scanf("%d",&t);
    for(int y=0;y<t;y++)
    {
        int n;
        char x;
        scanf("%d",&n);
        char s[n][n];
        for(int i=0;i<n;i++)
        {
            scanf("%s",s[i]);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(s[i][j]>s[i][k])
                    {
                       x=s[i][j];
                       s[i][j]=s[i][k];
                       s[i][k]=x;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            printf("%s \n",s[i]);
        }
    }
    return 0;
}
