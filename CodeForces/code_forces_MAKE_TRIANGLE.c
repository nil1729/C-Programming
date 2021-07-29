int main()
{
    int a[5];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    for(int i=0;i<2;i++)
    {
        for(int j=i;j<3;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    if(a[0]+a[1]>a[2])
    {
        printf("0");
    }
    else
    {
        int x=a[2]-(a[0]+a[1])+1;
        printf("%d",x);
    }
    return 0;
}
