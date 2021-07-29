int main()
{
    int d,count=0;
    scanf("%d",&d);
    while(d)
    {
        long long int r,x,m=0,c=0;
        scanf("%d %d",&r,&x);
        c=44*r;
        m=(700*x);
        if(c<=m)
        {
        count++;
        }
        d--;
    }
    printf("%d\n",count);
    return 0;
}
