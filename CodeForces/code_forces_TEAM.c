int main()
{

    int n;
    scanf("%d",&n);
    int a[1010][3];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if((a[i][0]==1&&a[i][1]==1)||(a[i][0]==1&&a[i][2]==1)||(a[i][1]==1&&a[i][2]==1))
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
