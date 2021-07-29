int main()
{
    int arr[]={1,2,3,4,5};
    arr[2]=*(arr+1);
    *(arr+1)=arr[4];
    int *ptr=&arr[5];
    ptr--;
    *ptr=arr[3];
    *arr=*ptr;
    for(int i=0;i<5;i++)
        printf("%d\t",*(arr+i));
    return 0;
}
