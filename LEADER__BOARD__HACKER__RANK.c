int main()
{
    int n,m;
    scanf("%d",&n);
    int *score=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&score[i]);
    scanf("%d",&m);
    int *alice=(int*)malloc(sizeof(int)*m);
    for(int i=0;i<m;i++)
        scanf("%d",&alice[i]);
    int rank[n],x=1;
    rank[0]=1;
    for(int i=1;i<n;i++)
    {
        if(score[i]!=score[i-1])
        {
            rank[i]=++x;
        }
        else
            rank[i]=x;
    }
    int j=n-1;
    for(int i=0;i<m;i++)
    {
        int flag=0;
        while(j>=0)
        {
            if(alice[i]<score[j])
            {
                printf("%d\n",rank[j]+1);
                flag++;
                break;
            }
            j--;
        }
        if(flag==0)
            printf("%d\n",rank[0]);
    }
    return 0;
}
