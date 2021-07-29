int main()
{
    long long int n,cnt_n=0,cnt_p=0,cnt=0,cnt_0=0;
    scanf("%I64d",&n);
    long long int *arr=(long long int*)malloc(sizeof(long long int)*n);
    for(int i=0;i<n;i++)
        scanf("%I64d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            cnt_n++;
            if(arr[i]!=-1)
                cnt+=(-1-arr[i]);
        }
        if(arr[i]>0)
        {
            cnt_p++;
            if(arr[i]!=1)
                cnt+=(arr[i]-1);
        }
        if(arr[i]==0)
            cnt_0++;
    }
    if(cnt_0!=0)
    {
            cnt+=cnt_0;
    }
    else
    {
        if(cnt_n%2==1)
        {
            cnt+=2;
        }
    }
    printf("%I64d",cnt);
    return 0;
}
