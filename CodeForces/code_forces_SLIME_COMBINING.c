int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        arr[i]=0;
    arr[0]=1;
    int k=1;
    n--;
    while(n>0)
    {
        arr[k]=1;
        if(arr[k]==arr[k-1])
        {
            while(arr[k]==arr[k-1])
            {
                arr[k-1]=arr[k]+1;
                k--;
            }
        }
        /*for(int i=0;i<=k;i++)
            printf("%d ",arr[i]);*/
        k++;
        n--;
        //printf("\n");
    }
    //printf("\n");
    for(int i=0;i<k;i++)
        printf("%d ",arr[i]);
    return 0;
}
