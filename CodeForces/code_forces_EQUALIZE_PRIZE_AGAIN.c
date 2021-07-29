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
        int n,sum=0;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        int x=sum/n;
        if(x*n!=sum)
            x++;
        printf("%d\n",x);
    }
    return 0;
}
