void swap(char *a,char *b)
{
    char t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        char arr[100];
        scanf("%s",arr);
        int n=strlen(arr);
        int pivot=0;
        for(int i=n-1;i>=1;i--)
        {
            if(arr[i]>arr[i-1])
            {
                pivot=i;
                break;
            }
        }
        if(pivot!=0)
        {
        int index=n-1;
        for(int j=n-1;j>=pivot;j--)
        {
            if(arr[j]>arr[pivot-1])
            {
                index=j;
                break;
            }
        }
        swap(&arr[pivot-1],&arr[index]);
        char t[n-pivot];
        int k=0;
        for(int i=pivot;i<n;i++)
        {
            t[k]=arr[i];
            k++;
        }
        for(int i=0;i<k/2;i++)
        {
            char p=t[i];
            t[i]=t[k-1-i];
            t[k-1-i]=p;
        }
        for(int i=0;i<pivot;i++)
        {
            printf("%c",arr[i]);
        }
        for(int i=0;i<k;i++)
        {
            printf("%c",t[i]);
        }
        printf("\n");
        }
        else
            printf("no answer\n");
    }
    return 0;
}
