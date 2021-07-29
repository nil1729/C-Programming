int main()
{
    int n,h,arr[1200],sum=0;
    scanf("%d %d",&n,&h);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>h)
        {
            sum=sum+2;
        }
        else
        {
            sum=sum+1;
        }
    }
    printf("%d",sum);
    return 0;
}
