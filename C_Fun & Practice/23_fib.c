# include <stdio.h>
long long fib(long long n) {
    if (n == 1) {
        return 0;
    }
    else if (n == 2) {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
int main() {
    long long n;
    printf("Enter the position of the Fibonacci number (starting from 1):\n");
    int c = scanf("%lld", &n);
    if (c) {
        if (n < 1) {
            printf("position must be > or = 1\n");
        }
        else {
            printf("the fib number is %lld\n", fib(n));
        }
    }
    else {
        printf("enter only a number please\n");
    }
    return 0;
}
