	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n,cnt=1,k=0;
    scanf("%d",&n);
    long long int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    qsort (arr, n, sizeof(int), comparetor );
    long long int count[n],index[n],max=0,IND;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]==arr[i])
            cnt++;
        else
        {
            count[k]=cnt;
            index[k]=arr[i-1];
            k++;
            cnt=1;
        }
    }
    if(cnt>0)
    {
        count[k]=cnt;
        index[k]=arr[n-1];
    }
    else
        k--;
    int j=0;
    while(j<=k)
    {
        if(max<count[j])
        {
            max=count[j];
            IND=index[j];
        }
        j++;
    }
    int cost=0;
    for(int i=0;i<n;i++)
    {
        cost+=((abs(IND-arr[i]))%2);
    }
    printf("%d",cost);
    return 0;
}
