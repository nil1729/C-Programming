int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k=0,t[n];
    for(int i=0;i<n;i++)
        t[i]=0;
    while(k<m)
    {
        for(int i=n-1;i>=arr[k]-1;i--)
        {
            if(t[i]==0)
                t[i]=arr[k];
        }
        k++;
    }
    for(int i=0;i<n;i++)
        printf("%d ",t[i]);
    return 0;
}
