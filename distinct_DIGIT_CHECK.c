int isLucky(int n)
{
    int arr[10]={};
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
    int n;
    scanf("%d",&n);
    if(isLucky(n))
        printf("YES");
    else
        printf("NO");
    return 0;
}
