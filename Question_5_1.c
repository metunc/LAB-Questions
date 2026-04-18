#include <stdio.h>

void triangleType(float a,float b,float c){
    if(a>=b+c || b>=a+c || c>=a+b)
        printf("The edge lengths do not form a triangle.\n");
    else if(a==b && b==c)
        printf("Equilateral.\n");
    else if(a==b || a==c || b==c)
        printf("Isosceles.\n");
    else 
        printf("Scalene.\n");
}

int main(){
    float x,y,z;
    printf("Enter the edge lengths of the triangle:");
    scanf("%f %f %f",&x,&y,&z);
    triangleType(x,y,z);
    return 0;
}