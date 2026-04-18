#include <stdio.h>

int main(){

    int sayi;
    printf("Enter the measure A: ");
    scanf("%d", &sayi);
    float B=(20-sayi)*2.3+54*sayi ;
    printf("%d A is equal to %.2f B.\n",sayi, B);


}