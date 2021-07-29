	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    qsort(arr,n,sizeof(int),comparetor);
    long long int sum=0;
    int p=n/k,t=0;
    while(p--)
    {
        int i=n-k*t-1;
        //printf("%d\t",i);
        int count=0;
        while(count<k)
        {
            sum+=((t+1)*arr[i]);
            i--;
            count++;
        }
       // printf("%d\n",count);
        t++;
    }
    //printf("%lld\t%d\n",sum,t);
    if(n%k!=0)
    {
        int i=n-k*t-1;
        while(i>=0)
        {
            sum+=(t+1)*arr[i];
            i--;
        }

    }
    printf("%lld",sum);
    return 0;
}
