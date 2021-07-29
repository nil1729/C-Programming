int main()
{
    unsigned long long int n,x,arr[20],i=0,m,count=0;
    scanf("%llu",&n);
    x=n;
    while(x!=0)
    {
        arr[i]=x%10;
        x=x/10;
        i++;
    }
    m=i;
    for(int i=0;i<m;i++)
    {
        if(arr[i]==4 || arr[i]==7)
        {
            count++;
        }
    }
    if(count==4 || count==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
