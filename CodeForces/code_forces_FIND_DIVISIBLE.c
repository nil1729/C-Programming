int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        long long int l,r;
        scanf("%I64d %I64d",&l,&r);
        printf("%I64d %I64d\n",l,2*l);
    }
    return 0;
}
