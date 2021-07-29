void INSERTION_SORT(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        for(int p=0;p<n;p++)
            printf("%d  ",arr[p]);
        printf("\n");
    }
}
int main()
{
    int n;
    printf("ENTER  SIZE  OF THE ARRAY\n");
    scanf("%d",&n);
    int *arr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    INSERTION_SORT(arr,n);
    /*for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }*/
    return 0;
}

