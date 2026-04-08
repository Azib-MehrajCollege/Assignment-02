#include <stdio.h>
int main() {
    // fibonacci series (upto 49 terms)
    int num1 = 0; 
    int num2 = 1; 
    printf("%d\t%d\t", num1, num2);
    for (int i=0; i<=6; i++) {
        int fib = num2+num1; 
        num1=num2;
        num2=fib;
        printf("%d \t", fib);
    }
}