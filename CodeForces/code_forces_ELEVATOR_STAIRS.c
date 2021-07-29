int main()
{
    int x,y,z,t1,t2,t3;
    scanf("%d %d %d %d %d %d",&x,&y,&z,&t1,&t2,&t3);
    int a=abs(x-y);
    int b=abs(x-z);
    int c=a+b;
    int p=a*t1;
    int q=c*t2+3*t3;
    if(q<=p)
        printf("YES");
    else
        printf("NO");
    return 0;
}
