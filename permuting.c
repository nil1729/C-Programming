	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        int n,k,flag=0;
        scanf("%d %d",&n,&k);
        int a[n], b[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[j]);
        }
        qsort(a,n,sizeof(int),comparetor);
        qsort(b,n,sizeof(int),comparetor);
        for(int i=0;i<n;i++)
        {
            if(a[i]+b[n-1-i]<k)
            {
                flag++;
            }
        }
        if(flag==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;
}
