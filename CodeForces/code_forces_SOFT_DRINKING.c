int min(int a,int b,int c)
{
    if(a<b)
    {
        if(a<c)
            return a;
        else
            return c;
    }
    else
    {
        if(b<c)
            return b;
        else
            return c;
    }
}
int main()
{
    int n,k,l,c,d,p,x,y;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&x,&y);
    int DRINK=k*l;
    int LIME=c*d;
    int SALT=p;
    int per_DRINK=DRINK/x;
    int per_LIME=LIME/1;
    int per_SALT=SALT/y;
    int total=min(per_DRINK,per_LIME,per_SALT);
    int TOAST=total/n;
    printf("%d",TOAST);
    return 0;
}
