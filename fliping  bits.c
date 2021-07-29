int main()
{
    int q;
    scanf("%d",&q);
    while(q)
    {
            unsigned long long int n,i=0,bit[32]={},sum=0,flip[32]={};
    scanf("%lld",&n);
    while(n)
    {
        bit[i]=n%2;
        n/=2;
        i++;
    }
    for(int j=0;j<32;j++)
    {
        if(bit[j]==0)
            flip[j]=1;
        else
            flip[j]=0;
    }
    for(int j=0;j<32;j++)
    {
        sum=sum+(flip[j]*pow(2,j));
    }
    printf("%lld",sum);
    q--;
    }
    return 0;
}
