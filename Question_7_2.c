#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int A[12],B[3][4],i,j;
    srand(time(NULL));

    for(i=0;i<12;i++){

            A[i]=-20+(rand()%41);
            printf("%d\n",A[i]);
    }

    int sumn=0,sump=0;
    int odd=0,even=0;
    for(i=0;i<12;i++){

            if(A[i]<0){
                sumn +=A[i];}
                else{
                sump +=A[i];}
            
             if(A[i]%2==0)
                    {
                        even+=1;
                    }
                    else
                    {
                        odd+=1;
                    }
                }

            for(i=0;i<3;i++){
                for(j=0;j<4;j++){
                    B[i][j]=A[4*i+j];
                }
            }
            printf ("sum of negative numbers: %d\n", sumn); 
            printf ("sum of positive numbers: %d\n", sump); 
            printf ("number of even numbers: %d\n", even);
            printf("number of odd numbers: %d\n",odd);
            for(i=0;i<3;i++){
                for(j=0;j<4;j++){
                    printf("%4d",B[i][j]);
                }
                printf("\n");
            }
}