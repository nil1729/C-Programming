int main()
{
    int y,b,r;
    scanf("%d %d %d",&y,&b,&r);
    int arr[3]={3*y+3,3*b,3*r-3};
    int min=y+b+r;
    for(int i=0;i<3;i++)
        if(min>arr[i])
            min=arr[i];
    printf("%d",min);
    return 0;
}
