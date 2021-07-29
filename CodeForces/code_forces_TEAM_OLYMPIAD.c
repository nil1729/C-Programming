int main()
{
    int n,arr[6000]={},c[5]={},r[5][5500],k=1,l=1,m=1,x;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1)
        {
            c[1]++;
            r[1][k]=i;
            k++;
        }
        if(arr[i]==2)
        {
            c[2]++;
            r[2][l]=i;
            l++;
        }
        if(arr[i]==3)
        {
            c[3]++;
            r[3][m]=i;
            m++;
        }
    }
    int min=5000;
    for(int i=1;i<=3;i++)
    {
        if(c[i]<min)
        {
            min=c[i];
        }
    }
    printf("%d\n",min);
    for(int i=1;i<=min;i++)
    {
        printf("%d %d %d\n",r[1][i],r[2][i],r[3][i]);
    }
    return 0;
}
