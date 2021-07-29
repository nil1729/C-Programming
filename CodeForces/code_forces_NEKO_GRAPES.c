int main()
{
    int n,m,x,a_e=0,a_o=0,b_e=0,b_o=0,y;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x%2==1)
        {
            a_o++;
        }
        else
            a_e++;
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&y);
        if(y%2==1)
            b_o++;
        else
            b_e++;
    }
    int count=0;
    if(a_e>b_o)
        count+=b_o;
    else
        count+=a_e;
    if(a_o>b_e)
        count+=b_e;
    else
        count+=a_o;
    printf("%d",count);
    return 0;
}
