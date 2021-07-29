int main()
{
    int a,b,c,count=0;
    scanf("%d%d%d",&a,&b,&c);
    while(a>=1 && b>=2  && c>=4)
    {
        count+=7;
        a-=1;
        b-=2;
        c-=4;
    }
    printf("%d",count);
    return 0;
}
