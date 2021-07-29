void MULT(int arr[][10],int brr[][10],int r1,int c1,int r2,int c2)
{
    int M[10][10];
    printf("A  MATRIX:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++)
            printf("%d  ",arr[i][j]);
        printf("\n");
    }
    printf("\nB  MATRIX:\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++)
            printf("%d  ",brr[i][j]);
        printf("\n");
    }
    for(int i=0;i<r1;i++)
        for(int j=0;j<c2;j++)
            M[i][j]=0;
    for(int i=0;i<r1;i++)
        for(int j=0;j<c2;j++)
            for(int k=0;k<c1;k++)
                M[i][j]+=(arr[i][k]*brr[k][j]);
    printf("MATRIX  OF  MULTIPLICATION:\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
            printf("%d  ",M[i][j]);
        printf("\n");
    }
}
int main()
{
    int r1,c1,r2,c2;
    printf("ENTER VALID  DIMENSION(<=10)  FOR  A AND  B  MATRIX [mXn  format by a space]\n");
    scanf("%dX%d %dX%d",&r1,&c1,&r2,&c2);
    int arr[10][10],brr[10][10];
    printf("ENTER  ELEMENTS  OF  A  MATRIX\n");
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            scanf("%d",&arr[i][j]);
    printf("ENTER  ELEMENTS  OF  B  MATRIX\n");
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            scanf("%d",&brr[i][j]);
    MULT(arr,brr,r1,c1,r2,c2);
    return 0;
}
