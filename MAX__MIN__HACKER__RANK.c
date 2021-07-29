	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    qsort(arr,n,sizeof(int),comparetor);
    int brr[n-k+1];
    for(int i=0;i<n-k+1;i++)
        brr[n-k+1]=0;
    for(int i=0;i<n-k+1;i++)
        brr[i]=arr[i+k-1]-arr[i];
    int min=1000000000;
    for(int i=0;i<n-k+1;i++)
        if(brr[i]<min)
            min=brr[i];
    printf("%d",min);
    return 0;
}
