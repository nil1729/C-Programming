int main()
{
    int a,b,i=0;
    scanf("%d %d",&a,&b);
    while(1)
    {
        a=a*3;
        b=b*2;
        i++;
        if(a>b)
        {
            break;
        }
    }
    printf("%d",i);
    return 0;
}
