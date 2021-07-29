int main()
{
    int n;
    scanf("%d",&n);
    int k=1,sum=0;
    while(k<=n)
    {
        sum+=k;
        k++;
        if(sum==n)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
