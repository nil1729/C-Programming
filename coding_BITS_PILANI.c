int digit_count(int n)
{
    int m=n,count=0;
    while(m!=0)
    {
        m=m/10;
        count++;
    }
    return count;
}
void is_AMSTRONG(int n)
{
    int y=digit_count(n);
    int m=n,p=0,sum=0;
    while(m!=0)
    {
        p=m%10;
        sum=sum+pow(p,y);
        m=m/10;
    }
        printf("%d",sum);
}
int main()
{
    int x;
    scanf("%d",&x);
    is_AMSTRONG(x);
    //int p=digit_count(x);
    //14514141141
    //printf("%d",p);
    return 0;
}
