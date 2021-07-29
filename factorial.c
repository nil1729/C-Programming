int mult(int size, int res[], int x)
{
    int prod,carry=0;
    for(int j=0;j<size;j++)
    {
        prod = res[j]*x + carry;
        res[j] = prod%10;
        carry = prod/10;
    }
    while(carry)
    {
        res[size]=carry%10;
        carry=carry/10;
        size++;
    }
    return size;
}
void fact(int n)
{
    int i,size,res[200];
    res[0]=1;
    size=1;
    for(int i=2;i<=n;i++)
    {
        size = mult(size,res,i);
    }
    for(int i=size-1;i>=0;i--)
    {
        printf("%d",res[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fact(n);
    return 0;
}
