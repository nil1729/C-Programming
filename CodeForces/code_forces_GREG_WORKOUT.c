int main()
{
    int n,count[5]={};
    scanf("%d",&n);
    int a[30];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i+=3)
    {
        count[0]+=a[i];
    }
    for(int i=1;i<n;i+=3)
    {
        count[1]+=a[i];
    }
    for(int i=2;i<n;i+=3)
    {
        count[2]+=a[i];
    }
    int max=0,J;
    for(int i=0;i<3;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            J=i;
        }
    }
   // printf("%d %d",max,J);
    if(J==0)
        printf("chest");
    if(J==1)
        printf("biceps");
    if(J==2)
        printf("back");
    return 0;
}
