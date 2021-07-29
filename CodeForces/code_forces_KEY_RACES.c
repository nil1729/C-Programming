int main()
{
    int s,v1,v2,t1,t2;
    scanf("%d %d %d %d %d",&s,&v1,&v2,&t1,&t2);
    int x=s*v1+2*t1;
    int y=s*v2+2*t2;
    if(x<y)
        printf("First");
    if(y<x)
        printf("Second");
    if(x==y)
        printf("Friendship");
    return 0;
}
