int main()
{
    int a,b,x,y,k=1;
    scanf("%d %d %d %d",&a,&b,&x,&y);
    while(a>0 && b>0)
    {
        if(k%2==1)
            a--;
        else
            b--;
        k++;
    }
    if(b>0)
        printf("Second",a,b);
    if(a>0)
        printf("First",a,b);
    return 0;
}
