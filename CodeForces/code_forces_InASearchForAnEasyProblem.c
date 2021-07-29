int main()
{
    int n,a[200];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            printf("HARD");
            return 0;
        }
    }
    printf("EASY");
    return 0;
}
