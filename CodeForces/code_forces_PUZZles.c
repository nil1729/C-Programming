int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{

    int m,n,a[100],p[100]={};
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,m,sizeof(int),comparetor);
    for(int i=0;i<=m-n;i++)
    {
        p[i]=a[i+n-1]-a[i];
    }
    int min=a[n-1]-a[0];
    for(int i=0;i<=m-n;i++)
    {
        if(p[i]<min)
        {
            min=p[i];
        }
    }
    printf("%d",min);
    return 0;
}
