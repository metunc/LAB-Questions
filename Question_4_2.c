#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int hasMidpoint(int a,int b,int c)
{

    return (2*a == b + c) || (2*b == a + c) || (2*c == a+b);
}

int main(){

    int a, b, c;

    printf("Enter the integers: ");
    scanf("%d %d %d", &a,&b,&c);

    printf("Midpoint relation of %d, %d, %d: %d\n", a, b, c, hasMidpoint(a, b, c));

    return 0;

}