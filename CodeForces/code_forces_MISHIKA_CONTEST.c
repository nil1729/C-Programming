int main()
{
    int n,k,a[200]={};
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0;i<n;i+=0)
    {
        if(a[i]>k && a[n-1]>k)
        {
            printf("%d",sum);
            return 0;
        }
        else
        {
            sum++;
            if(a[i]<=k)
                i++;
            else
                n--;
        }
    }
    printf("%d",sum);
    return 0;
}
