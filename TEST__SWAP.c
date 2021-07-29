void swap(int *a,int *b)
{
    int *t;
    t=a;
    a=b;
    b=t;
}
int main()
{
    int a=1,b=2;
    swap(&a,&b);
    printf("a=%d, b=%d",a,b);
    return 0;
}
