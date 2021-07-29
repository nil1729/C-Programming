	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n,sum[2000]={};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        sum[i]=a+b+c+d;
    }
    int thomas=sum[0];
    qsort (sum, n, sizeof(int), comparetor );
    for(int i=n-1;i>=0;i--)
    {
        if(sum[i]==thomas)
        {
            int x=n-i;
            printf("%d",x);
            return 0;
        }
    }
    return 0;
}
