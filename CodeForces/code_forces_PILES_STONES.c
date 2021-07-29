int main()
{
    int n,sum1=0,sum2=0;
    scanf("%d",&n);
    int x[100]={},y[100]={};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        sum1+=x[i];
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
        sum2+=y[i];
    }
    if(sum1>=sum2)
        printf("YES");
    else
        printf("NO");
    return 0;
}
