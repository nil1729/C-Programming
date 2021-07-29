	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n,m;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    qsort(a,n,sizeof(int),comparetor);
    qsort(b,m,sizeof(int),comparetor);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                a[j]=-1;
                break;
            }
            else
            {
                printf("%d ",b[i]);
                break;
            }
        }
    }
    return 0;
}
