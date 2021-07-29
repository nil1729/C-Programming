int main()
{
    int h,w,a[100][100],sum=0;
    scanf("%d %d",&h,&w);
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int j=0;j<w;j++)
    {
        sum=sum+a[0][j];
    }
    for(int j=0;j<w;j++)
    {
        sum=sum+a[h-1][j];
    }
    for(int i=0;i<h;i++)
    {
        sum=sum+a[i][0];
    }
    for(int i=0;i<h;i++)
    {
        sum=sum+a[i][w-1];
    }
    sum = sum + 2*(h*w);
    for(int i=0;i<h;i++)
    {
        for(int j=1;j<w;j++)
        {
            sum = sum + abs(a[i][j]-a[i][j-1]);
        }
    }
    for(int j=0;j<w;j++)
    {
        for(int i=1;i<h;i++)
        {
            sum = sum + abs(a[i][j]-a[i-1][j]);
        }
    }
    printf("%d",sum);
    return 0;
}
