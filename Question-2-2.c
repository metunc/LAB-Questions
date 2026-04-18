#include <stdio.h>
int main(){

    char ch1,ch2,middle;
    
    printf(">Enter the first character: ");
    ch1 = getchar();

    getchar();

    printf(">Enter the second character: ");
    ch2 = getchar();

    middle = (ch1+ch2)/2;


    printf(">Middle of these characters is %c\n",middle);



    return 0;
}
    