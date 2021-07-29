int main()
{
    int k,r,i=1;
    scanf("%d %d",&k,&r);
    while(i)
    {
        int x=k*i;
        int y=x-r;
        if(x%10==0 || y%10==0)
        {
            printf("%d",i);
            return 0;
        }
        i++;
    }
    return 0;
}
