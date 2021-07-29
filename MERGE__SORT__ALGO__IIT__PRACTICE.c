void MERGE_SORT(int arr[],int n)
{
    int l=1;
    int brr[n];
    while(l<n)
    {
        merge_pass(arr,n,l,brr);
        merge_pass(brr,n,2*l,arr);
        l*=4;
    }
}
void merge_pass(int arr[],int n, int l,int brr[])
{
    int q=n/(l*2);
    int s=q*2*l;
    int r=n-s;
    for(int i=0;i<q;i++)
    {
        int LB=2*i*l;
        for(int i=0;i<q;i++)
        {
            merge(arr,l,LB,arr,l,LB+l,brr,LB);
        }
    }
        if(r<=l)
        {
            for(int i=0;i<r;i++)
                brr[i+s]=arr[i+s];
        }
        else
        {
            merge(arr,l,s,arr,r-l,s+l,brr,s);
        }
}
void merge(int a[],int n1,int index1,int b[],int n2,int index2,int c[],int index)
{
    while(n1&&n2)
    {
        if(a[index1]<b[index2])
        {
            c[index]=a[index1];
            index++;
            index1++;
            n1--;
        }
        else
        {
            c[index]=b[index2];
            index++;
            index2++;
            n2--;
        }
    }
    while(n1)
    {
        c[index]=a[index1];
        index++;
        index1++;
        n1--;
    }
    while(n2)
    {
        c[index]=b[index2];
        index++;
        index2++;
        n2--;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int *arr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    MERGE_SORT(arr,n);
    for(int i=0;i<n;i++)
        printf("%d  ",arr[i]);
    return 0;
}
