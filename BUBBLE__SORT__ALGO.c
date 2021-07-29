void BUBBLE_SORT(int A[],int N)
{
    int round;
    int flag=0;
    for(int round=1;round<=N-1;round++)
    {
        for(int i=0;i<=N-1-round;i++)
        {
            if(A[i]>A[i+1])
            {
                flag++;
                int t=A[i];
                A[i]=A[i+1];
                A[i+1]=t;
            }
        }
        if(flag==0)
            break;
    }
    printf("Array is sorted in %d swaps.\n",flag);
    printf("First Element : %d\nLast Element : %d",A[0],A[N-1]);
}
int main()
{
    int N,A[100];
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    BUBBLE_SORT(A,N);
    /*for(int i=0;i<N;i++)
        printf("%d  ",A[i]);*/
    return 0;
}
