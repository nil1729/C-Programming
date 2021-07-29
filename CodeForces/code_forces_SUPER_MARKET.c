#include<stdio.h>
int main()
{
    int n;
    long double m;
    scanf("%d %Lf",&n,&m);
    //printf("%d %Lf\n",n,m);
    long double arr[n][2],p[n];
    for(int i=0;i<n;i++)
    {
        scanf("%Lf %Lf",&arr[i][0],&arr[i][1]);
        p[i]=(m*arr[i][0])/arr[i][1];
        //printf("%Lf\n",p[i]);
    }
    long double min=p[0];
    for(int i=1;i<n;i++)
    {
        if(p[i]<min)
        {
            min=p[i];
        }
    }
    printf("%.8Lf",min);
    return 0;
}
