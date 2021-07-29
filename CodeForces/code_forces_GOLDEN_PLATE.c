int main()
{
    int w,h,k,W=0,H=0;
    scanf("%d %d %d",&w,&h,&k);
    int sum=0;
    h=h-2;
    for(int i=1;i<=k;i++)
    {
        W+=2*(w-4*(i-1));
        H+=2*(h-4*(i-1));
    }
    sum=H+W;
    printf("%d",sum);
    return 0;
}
