#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    char ch1,ch2,ch3;
    printf(">Enter the first character: ");
    scanf("%c",&ch1);

    getchar();
    printf(">Enter the second character: ");
    ch2 = getchar();

    getchar();
    printf(">Enter the third character: ");
    ch3 = getchar();


   float Harmonic_mean = 2/((1/(float)ch1)+(1/(float)ch3));

   int result = (Harmonic_mean > ch2) && (ch2 > 100);
    printf(">Is hm(%c,%c) > %c and ASCII of %c greater than 100: %d\n",ch1,ch3,ch2,ch2,result);


    return 0;
}