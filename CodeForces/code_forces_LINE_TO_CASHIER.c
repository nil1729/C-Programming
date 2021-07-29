int main()
{
    int n;
    scanf("%d",&n);
    int k[n];
    for(int i=0;i<n;i++)
        scanf("%d",&k[i]);
    int *p[n],sum[n];
    for(int i=0;i<n;i++)
        sum[i]=0;
    for(int i=0;i<n;i++)
    {
        p[i]=(int*)malloc(sizeof(int)*k[i]);
        for(int j=0;j<k[i];j++)
        {
            scanf("%d",&p[i][j]);
        }
        for(int j=0;j<k[i];j++)
            sum[i]+=(p[i][j]*5);
        //printf("%d  ",sum[i]);
        sum[i]+=(15*k[i]);
        //printf("\n");
       // printf("%d  ",sum[i]);
    }
    int min=1000000000;
    for(int i=0;i<n;i++)
    {
        if(sum[i]<min)
            min=sum[i];
    }
    printf("%d",min);
    return 0;
}
