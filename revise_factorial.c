int mult(int x,int size,int arr[])
{
    int prod,carry=0;
    for(int j=0;j<size;j++)
    {
        prod=x*arr[j]+carry;
        arr[j]=prod%10;
        carry=prod/10;
    }
    while(carry)
    {
        arr[size]=carry%10;
        carry=carry/10;
        size++;
    }
    return size;
}
void fact(int n)
{
    int arr[200];
    arr[0]=1;
    int size=1;
    for(int i=2;i<=n;i++)
    {
        size=mult(i,size,arr);
    }
    for(int i=size-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fact(n);
    return 0;
}
