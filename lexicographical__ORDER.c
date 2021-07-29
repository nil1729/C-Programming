void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int pivot=0;
    for(int i=n-1;i>=1;i--)
    {
        if(arr[i]>arr[i-1])
        {
            pivot=i;
            break;
        }
    }
    int index=n-1;
    for(int j=n-1;j>=pivot;j--)
    {
        if(arr[j]>arr[pivot-1])
        {
            index=j;
            break;
        }
    }
    swap(&arr[pivot-1],&arr[index]);
    int t[n-pivot],k=0;
    for(int i=pivot;i<n;i++)
    {
        t[k]=arr[i];
        k++;
    }
    for(int i=0;i<k;i++)
    {
        printf("%d  ",t[i]);
    }
    printf("\n");
    for(int i=0;i<k/2;i++)
    {
        int p=t[i];
        t[i]=t[k-1-i];
        t[k-1-i]=p;
    }
    for(int i=0;i<pivot;i++)
    {
        printf("%d  ",arr[i]);
    }
    for(int i=0;i<k;i++)
    {
        printf("%d  ",t[i]);
    }
    return 0;
}
