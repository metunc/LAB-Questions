#include <stdio.h>
#include <math.h>

void controlFunction(char ch){
    if(('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z'))
        printf("The character %c is alphabet.\n",ch);
    else if(('0' <= ch && ch <= '9'))
        printf("The character %c is digit.\n",ch);
    else 
        printf("The character %c is special symbol character.\n",ch);
}



int main(){
    char c;

    printf("Enter a character: ");
    scanf("%c",&c);
    controlFunction(c);

    return 0;
}
