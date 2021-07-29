int main()
{
    int a,b,A=0,B=0;
    scanf("%d%d",&a,&b);
    int x=abs(a-b)/2;
    if(a<b)
    {
        int y=a+x,k=1,h=1;
        for(int i=b-1;i>=y;i--)
        {
            B+=k;
            k++;
        }
        for(int i=a+1;i<=y;i++)
        {
            A+=h;
            h++;
        }
        printf("%d",A+B);
        return 0;
    }
    else
    {
        int y=b+x,k=1,h=1;
        for(int i=a-1;i>=y;i--)
        {
            A+=k;
            k++;
        }
        for(int i=b+1;i<=y;i++)
        {
            B+=h;
            h++;
        }
        printf("%d",A+B);
        return 0;
    }
}
