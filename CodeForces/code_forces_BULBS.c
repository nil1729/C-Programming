int main()
{
    int n,m,x[200]={},y[200][200]={};
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        for(int j=0;j<x[i];j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    for(int i=1;i<=m;i++)
    {
        int flag=0;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<x[j];k++)
            {
                if(i==y[j][k])
                {
                    flag++;
                    break;
                }
            }
            if(flag>0)
                break;
        }
        if(flag==0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
