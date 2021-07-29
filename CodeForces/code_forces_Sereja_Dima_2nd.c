int main()
{
    int n,sereja=0,dima=0;
    scanf("%d",&n);
    int a[2000]={};
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    int i=0;
    int N=n;
    for(int k=0;k<N;k++)
    {
        if(k%2==0)
        {
            if(a[i]>a[n-1])
            {
                sereja+=a[i];
                i++;
            }
            else
            {
                sereja+=a[n-1];
                n--;
            }
        }
        else
        {
            if(a[i]>a[n-1])
            {
                dima+=a[i];
                i++;
            }
            else
            {
                dima+=a[n-1];
                n--;
            }
        }
    }
    printf("%d %d",sereja,dima);
    return 0;
}
