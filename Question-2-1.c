#include <stdio.h>
#include <math.h>
int main(){
    char ch1;
    printf("Enter the first character: ");
    scanf("%c",&ch1);
    getchar();
    char ch2;
    printf("Enter the second character: ");
    ch2= getchar();

    float gm;
    gm = sqrt(ch1*ch2);

    printf("Geometric mean of %c and %c is %.7f\n",ch1,ch2,gm);


    return 0;
}