int main()
{
    int n,t,x,count=0,arr[100000];
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=1;i<n;i++)
        {
            j=i;
            while(arr[j]<arr[j-1]&&j>0)
            {
                t=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=t;
                j--;
                count++;
            }
        }
        printf("%d\n",count);
    return 0;
}

