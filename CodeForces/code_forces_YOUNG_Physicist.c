int main()
{
    int n;
    scanf("%d",&n);
    int x[200],y[200],z[200],X=0,Y=0,Z=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
        X=X+x[i];
        Y=Y+y[i];
        Z=Z+z[i];
    }
    if(X==0 && Y==0 && Z==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
