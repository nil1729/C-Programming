int main()
{
    int m;
    scanf("%d",&m);
    int x = m/2000;
    int rem = m-x*2000;
    int y = rem/500;
    rem = rem - y*500;
    int z = rem/100;
    printf("100=%d 500=%d 2000=%d",z,y,x);
    return 0;
}
