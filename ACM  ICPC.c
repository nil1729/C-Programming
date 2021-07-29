#include<stdio.h>
int main()
{
    int n,m,max,b[500][500]={},count=0;
    char a[500][500];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
      //  for(int j=0;j<m;j++)
        //{
            scanf("%s",a[i]);
        //}
    }
    for(int i=0;i<n;i++)
    {
        for(int k=i+1;k<n;k++)
        {
            for(int j=0;j<m;j++)
            {
                if((a[i][j]=='1')||(a[k][j]=='1'))
                    b[i][k]++;
            }
        }

    }
    max=b[0][0];
    for(int i=0;i<n;i++)
    {
        for(int k=i+1;k<n;k++)
        {
            if(b[i][k]>max)
                max=b[i][k];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int k=i+1;k<n;k++)
        {
            if(b[i][k]==max)
                count++;
        }
    }
    printf("%d\n%d",max,count);
    return 0;
}
