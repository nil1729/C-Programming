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
    while(i<n)
    {
        if(a[i]>=a[n-1])
        {
            sereja+=a[i];
            a[i]=0;
            i++;
            if(a[i]>=a[n-1])
            {
                dima+=a[i];
                a[i]=0;
                i++;
            }
            else
            {
                dima+=a[n-1];
                a[n-i]=0;
                n--;
            }
        }
        else
        {
            sereja+=a[n-1];
            a[n-1]=0;
            n--;
            if(a[i]>=a[n-1])
            {
                dima+=a[i];
                a[i]=0;
                i++;
            }
            else
            {
                dima+=a[n-1];
                a[n-1]=0;
                n--;
            }
        }
       //printf("%d %d\n",sereja,dima);
    }
    printf("%d %d",sereja,dima);
    return 0;
}
