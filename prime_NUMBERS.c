int prime(int n)
{
    int i,m1=1,m2=0,flag=0;
    for(i = 2; i < n; ++i)
    {

        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }
        if (flag == 0)
          return m1;
        else
            return m2;
}
int main()
{

    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(prime(i))
        {
            printf("%d ",i);
        }
        else
        {
            i=i+0;
        }
    }
    return 0;
}
