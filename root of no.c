#include <stdio.h>
#include <stdlib.h>
#include <math.h>

Equation(int *a, int *b, int *c)
{
    int delt;
    float x,x1,x2;
    delt = (pow(*b,2) - (4 * (*a) * (*c)));
    if (delt < 0)
    {
        printf("Impossible the find results\n");
    }
    else
    {
        if(delt == 0)
        {
            printf("It is a double root\n");
            x = -(*b) / (2 * (*a));
            printf("the root is:%2.f\t", x);
        }
        else
        {
            printf("There are two roots:\n");
            x1 = ((-(*b)) - sqrt(delt)) / (2 * (*a));
            x2 = ((-(*b)) + sqrt(delt)) / (2 * (*a));
            printf("The roots are:%2.f\t, %2.f\t", x1, x2);
        }

    }



}
int main()
{
    int a = 2, b = 5, c = 1;
    Equation(&a,&b,&c);
    return 0;
}
