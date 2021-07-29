int main()
{
    int l,r,xor[1000][1000]={},max;
    scanf("%d%d",&l,&r);
    for(int i=l;i<=r;i++)
    {
        for(int j=l;j<=r;j++)
        {
            xor[i-l][j-l]=i^j;
        }
    }
    max =xor[0][0];
    for(int i=l;i<=r;i++)
    {
        for(int j=l;j<=r;j++)
        {
            if(xor[i-l][j-l]>max)
            {
                max=xor[i=l][j-l];
            }
        }
    }
    printf("%d",max);
    return 0;
}
