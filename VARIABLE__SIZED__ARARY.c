int main()
{
    int n,q;
    scanf("%d %d",&n,&q);
    int *arr[300500];
    for(int i=0;i<n;i++)
    {
        int k;
        scanf("%d",&k);
        *arr[i]=(int*)malloc(sizeof(int)*k);
        for(int j=0;j<k;i++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<q;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        printf("%d\n",arr[x][y]);
    }
    return 0;
}
