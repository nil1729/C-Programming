int main()
{
    int n,m,c;
    scanf("%d",&n);
    int c_mishka=0,c_chris=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&m,&c);
        if(m>c)
            c_mishka++;
        if(m<c)
            c_chris++;
    }
    if(c_mishka>c_chris)
        printf("Mishka");
    if(c_mishka<c_chris)
        printf("Chris");
    if(c_mishka==c_chris)
        printf("Friendship is magic!^^");
    return 0;
}
