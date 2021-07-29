int main()
{
    int a1,a2,a3,b1,b2,b3,n;
    scanf("%d %d %d",&a1,&a2,&a3);
    scanf("%d %d %d",&b1,&b2,&b3);
    scanf("%d",&n);
    int x=(b1+b2+b3)/10;
    int y=(a1+a2+a3)/5;
    if((b1+b2+b3)%10!=0)
    {
        x+=1;
    }
    if((a1+a2+a3)%5!=0)
    {
        y+=1;
    }
    if(x+y<=n)
        printf("YES");
    else
        printf("NO");
    return 0;
}
