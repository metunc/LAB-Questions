#include <stdio.h>

int main(){
long long n, last_digit, m, toplam=0,i;
printf("Enter a ISBN number: ");
scanf("%lld",&n);
last_digit = n%10;
m= n/10;

for(i=1;i<11;i++){
    toplam = toplam + (m%10)*i;
    m = m/10;
}
if ((toplam%10)==last_digit)
    printf("ISBN number is valid\n");
else
    printf("ISBN number is invalid\n");
}
