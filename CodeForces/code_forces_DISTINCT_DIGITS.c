int isLucky(int n)
{
    int arr[15]={};
    for(int i=0;i<10;i++)
        arr[i]=0;
    int num=n;
    while(num>0)
    {
        int digit=num%10;
        if(arr[digit])
            return 0;
        arr[digit]=1;
        num=num/10;
    }
    return 1;
}
int main()
{
    int l,r;
    scanf("%d %d",&l,&r);
    int t=l;
    while(t<=r)
    {
        if(isLucky(t))
        {
            printf("%d",t);
            return 0;
        }
        t++;
    }
    printf("-1");
    return 0;
}
