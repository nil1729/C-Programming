int main()
{
    int n;
    scanf("%d",&n);
    int x=n-1;
    int y=2*x-1;
    int sum = 0;
    for(int i=1;i<=y;i+=2)
        sum+=i;
    sum*=2;
    sum+=(2*n-1);
    printf("%d",sum);
    return 0;
}
