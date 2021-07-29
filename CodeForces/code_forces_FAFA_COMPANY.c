int main()
{
    int count=0;
    int n;
    scanf("%d",&n);
    float rem=n,i=1;
    while(rem>1.0000)
    {
        float x=n-i;
        rem=x/i;
        int y=x/i;
        if(i*y==x)
            count++;
        i++;
    }
    printf("%d",count);
    return 0;
}
