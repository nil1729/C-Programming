	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int n,s,a[2000]={};
    scanf("%d %d",&n,&s);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),comparetor);
    int sum=0;
    for(int i=0;i<n-1;i++)
        sum+=a[i];
    if(sum<=s)
        printf("YES");
    else
        printf("NO");
    return 0;
}
