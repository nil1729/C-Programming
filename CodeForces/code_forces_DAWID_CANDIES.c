	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}
int main()
{
    int a[5]={};
    scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
    qsort(a,4,sizeof(int),comparetor);
    int x=a[0]+a[3];
    int y=a[1]+a[2];
    int z=a[0]+a[1]+a[2];
    if(x==y || z==a[3])
    {
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}
