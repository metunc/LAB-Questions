#include <stdio.h>
#include <math.h>
int main(){

    char x,y;
    double magnitude;

    printf("Enter character point (x,y): ");
    scanf("(%c,%c)",&x,&y);

    magnitude = sqrt(pow(x,2)+pow(y,2));

    printf("Magnitude of the vector: %.8f\n",magnitude);



    return 0;
}