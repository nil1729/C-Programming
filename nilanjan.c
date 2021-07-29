int main()
{
    int n,min1,min2,min;
    scanf("%d",&n);
    int l = 2*n-1;
    for(int i=1;i<=l;i++)
    {
        for(int j=1;j<=l;j++)
        {
            min1=i<l-i?i-1:l-i;
            min2=j<l-j?j-1:l-j;
            min=min1<=min2?min1:min2;
            printf("%d ",n-min);
        }
        printf("\n");
    }
}
