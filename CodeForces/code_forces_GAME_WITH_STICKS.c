int main()
{
    int n,m,k=0;
    scanf("%d %d",&n,&m);
    while(m>0 && n>0)
    {
        k++;
        m--;
        n--;
    }
    //printf("%d\n",k);
    if(k%2==0)
    {
        printf("Malvika");
        return 0;
    }
    if(k%2==1)
    {
        printf("Akshat");
        return 0;
    }
}
