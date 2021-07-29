	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
	int min(int a,int b)
	{
	    if(a>b)
            return b;
        else
            return a;
	}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        int sum=10000;
        qsort(arr,n,sizeof(int),comparetor);
        for(int base=0;base<3;base++)
        {
            int current_SUM=0;
            for(int i=0;i<n;i++)
            {
                int delta=arr[i]-arr[0]+base;
                current_SUM+=(int)delta/5 + delta%5/2 + delta%5%2;
            }
            sum=min(current_SUM,sum);
        }
        printf("sum\n");
    }
    return 0;
}
