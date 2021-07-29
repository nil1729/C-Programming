int main()
{
    int arr[3][3]={};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
        for(int i=0;i<3;i++)
        {
            int f=0;
            for(int j=0;j<3;j++)
            {
                if(arr[i][j]!=0 && i!=j)
                    f++;
                if(arr[i][j]!=1 && i==j)
                    f++;
            }
            if(f!=0)
            {
                printf("NOT  A  IDENTITY  MATRIX");
                return 0;
            }
        }
        printf("IDENTITY  MATRIX");
        return 0;
}
