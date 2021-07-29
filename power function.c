#include<math.h>

void main()
{
    int b,e,power;
    printf("Enter the base\n");
    scanf("%d",&b);
    printf("Enter the exponent\n");
    scanf("%d",&e);

    power=pow(b,e);
    printf("The power of the no = %d",power);
}
