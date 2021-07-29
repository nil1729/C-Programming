int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int x;
    scanf("%d",&x);
    int T[n][x+1];
    for(int i=0;i<n;i++)
        for(int j=0;j<x+1;j++)
            T[i][j]=0;
    for(int i=0;i<n;i++)
    {
        T[i][0]=1;
    }
    T[0][arr[0]]=1;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<x+1;j++)
        {
            if(j<arr[i])
                T[i][j]=T[i-1][j];
            else
                T[i][j]=T[i-1][j] || T[i-1][j-arr[i]];
        }
    }
    printf("\t");
    for(int i=0;i<x+1;i++)
        printf("%d ",i);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
        for(int j=0;j<x+1;j++)
        {
            printf("%d ",T[i][j]);
        }
        printf("\n");
    }
    if(T[n-1][x])
        printf("\nYES");
    else
        printf("\nNO");
    return 0;
}
