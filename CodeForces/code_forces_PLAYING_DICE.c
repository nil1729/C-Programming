int main()
{
    int a,b,c_A=0,c_B=0,c_DRAW=0;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=6;i++)
    {
        int x=abs(i-a);
        int y=abs(i-b);
        if(x<y)
            c_A++;
        if(x>y)
            c_B++;
        if(x==y)
            c_DRAW++;
    }
    printf("%d %d %d",c_A,c_DRAW,c_B);
    return 0;
}
