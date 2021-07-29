	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        qsort(arr,n,sizeof(int),comparetor);
        int cnt=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]==1)
                cnt++;
        }
        if(cnt==0)
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}
