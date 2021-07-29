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
        index1++;
        index++;
        n1--;
    }
    while(n2)
    {
        c[index]=b[index2];
        index2++;
        index++;
        n2--;
    }
}
void merge_pass(int a[],int n,int l,int b[])
{
    int q=n/(l*2);
    int s=q*2*l;
    int r=n-s;
    for(int i=0;i<q;i++)
    {
        int lb=2*i*l;
        merge(a,l,lb,a,l,lb+l,b,lb);
    }
    if(r<=l)
    {
        for(int i=0;i<r;i++)
        {
            b[s+i]=a[s+i];
        }
    }
    else
        merge(a,l,s,a,r-l,s+l,b,s);
}
void MERGE_SORT(int a[],int n)
{
    int l=1,b[n];
    while(l<n)
    {
        merge_pass(a,n,l,b);
        merge_pass(b,n,2*l,a);
        l*=4;
    }
}
int main()
{
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    MERGE_SORT(a,n);
    for(int i=0;i<n;i++)
        printf("%d  ",a[i]);
    return 0;
}
