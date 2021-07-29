int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    int i=0,j=1,count=0;
    qsort(a,n,sizeof(int),comparetor)
    while(j<n)
    {
        int d=a[j]-a[i];
        if(d==k)
        {
            count++;
            j++;
        }
        else
        {
            if(d>k)
            {
                i++;
            }
            else
            {
                j++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
