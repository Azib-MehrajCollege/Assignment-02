#include <stdio.h>
int main() {
    int n,isPrime=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<=1) {
        printf("%d is not a prime", n); 
        return 0;
    }
    for (int i=2; i*i<=n; i++) {  //i square <= n or i <=root n
        if (n%i==0) {
            printf("%d is not a prime", n);
            isPrime=0;
            break;
        }
    }
    if (isPrime) {
        printf("%d is prime", n);
    }
    return 0;
}