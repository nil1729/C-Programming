int main()
{
    int arr[7][7]={},sum[5][5]={};
    for(int i=0;i<6;i++)
    {
            scanf("%d %d %d %d %d %d",&arr[i][0],&arr[i][1],&arr[i][2],&arr[i][3],&arr[i][4],&arr[i][5]);
    }
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            sum[i][j]=arr[i][j]+arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
        }
    }
    int max=0,I,J;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(sum[i][j]>max)
            {
                max=sum[i][j];
                I=i;
                J=j;
            }
        }
    }
    printf("%d %d %d\n  %d\n%d %d %d",arr[I-1][J-1],arr[I-1][J],arr[I-1][J+1],arr[I][J],arr[I+1][J-1],arr[I+1][J],arr[I+1][J+1]);
    return 0;
}
