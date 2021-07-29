int digit_count(int n)
{
    int x=n,count=0;
    while(x!=0)
    {
        count++;
        x/=10;
    }
    return count;
}
int main()
{
    int n,arr[3000]={},size=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int x=i;
        if(digit_count(x)==1)
        {
            arr[size]=x;
            size++;
        }
        if(digit_count(x)==2)
        {
            arr[size]=x/10;
            size++;
            arr[size]=x%10;
            size++;
        }
        if(digit_count(x)==3)
        {
            arr[size]=x/100;
            size++;
            arr[size]=(x/10)%10;
            size++;
            arr[size]=x%10;
            size++;
        }
    }
    printf("%d",arr[n-1]);
    return 0;
}
