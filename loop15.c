#include <stdio.h>

int main() {
    int n, is_prime = 1; 

    printf("Enter the number:\n");
    scanf("%d", &n);

    if (n < 2) {
        printf("%d is not a prime number\n", n);
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {  
        if (n % i == 0) {
            is_prime = 0; 
            break;
        }
    }

    if (is_prime)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);

    return 0;
}

