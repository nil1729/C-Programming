#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int b,w,bc,wc,z,cost;
        scanf("%d %d",&b,&w);
        scanf("%d %d %d",&bc,&wc,&z);
        if((bc+z < wc)||(wc+z < bc))
        {
            if(bc+z < wc)
            {
                cost=((bc*b)+((bc+z)*w));
            }
            else
            {
                cost=((wc*w)+((wc+z)*b));
            }

        }
        else
        {
            cost=((bc*b)+(wc*w));
        }
        printf("%d",cost);
    }
    return 0;
}
