int main()
{
    int n,a[100200]={},count=0,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        /*if(a[i]<0)
        {
        int flag=0;
        for(int j=i;j>=1;j--)
        {
            if(a[j]>0)
            {
                flag++;
                a[j]--;
                break;
            }
        }
        if(flag==0)
            count++;
        }*/
        if(a[i]>0)
            sum+=a[i];
        else
        {
            if(sum>0)
                sum--;
            else
                count++;
        }
    }
    printf("%d",count);
    return 0;
}
