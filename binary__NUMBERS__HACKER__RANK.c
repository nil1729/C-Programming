int main()
{
    int n;
    scanf("%d",&n);
    int x=n,k=0;
    int arr[100]={};
    while(x!=0)
    {
        int p=x%2;
        arr[k]=p;
        x/=2;
        k++;
    }
    int t[100]={},count=0,m=0;
    for(int i=0;i<k;i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
        else
        {
            t[m]=count;
            count=0;
            m++;
        }
    }
    if(count>0)
    {
        t[m]=count;
    }
    else
        m--;
    int max=0;
    for(int i=0;i<=m;i++)
    {
        if(t[i]>max)
            max=t[i];
    }
    printf("%d",max);
    return 0;
}
