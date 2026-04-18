#include <stdio.h>
#include <math.h>

float Maclaurin(float x, int n){
    float i_thterm=1.0,toplam=1.0;
    int i;
    for (i=1;i<n;i++)
    {
    i_thterm *=x/i;
    toplam += i_thterm;
    }
    return toplam;
}

int main()
{
    float x;
    int i,n;
    printf("Enter the number of terms n: ");
    scanf("%d", &n);

    printf("Enter number for x: ");
    scanf("%f", &x);

    

    printf("Summary: %f\n", Maclaurin(x,n));
    return 0;
}
