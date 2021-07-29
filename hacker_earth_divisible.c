int main()
{
    int N,arr[100100];
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int brr[100100];
    for(int i=1;i<=N/2;i++)
    {
        int x=count(arr[i]);
        int y=pow(10,x-1);
        brr[i]=arr[i]/y;
    }
    for(int i=N/2+1;i<=N;i++)
    {
        brr[i]=arr[i]%10;
    }
    int sum1=0,sum2=0;
    for(int i=1;i<=N;i+=2)
    {
        sum1=sum1+brr[i];
    }
    for(int i=2;i<=N;i+=2)
    {
        sum2=sum2+brr[i];
    }
    int m=abs(sum1-sum2);
    if(m%11==0)
    {
        printf("OUI");
    }
    else
    {
        printf("NON");
    }
    return 0;
}
