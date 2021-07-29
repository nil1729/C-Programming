int main()
{
    int n;
    scanf("%d",&n);
    int arr[2000]={},count=0,j=0,c[200]={};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            c[j]=i;
            count++;
            j++;
        }
    }
    c[j]=n;
    printf("%d\n",count);
    for(int i=0;i<j;i++)
    {
        int x=c[i+1]-c[i];
        printf("%d ",x);
    }
    return 0;
}
