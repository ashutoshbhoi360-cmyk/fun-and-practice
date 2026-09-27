# include <stdio.h>
long long sum(long long n) {
   if (n == 1) {
        return 1;
    }
return n + sum(n-1);
}
int main() {
    long long n;
    printf("how much numbers to sum from 1\n");
    int c = scanf("%lld", &n);
    if (c) {
        if (n < 1) {
            printf("can't sum of 0 natural numbers\n");
        }
        else {
            printf("the sum of first %lld natural numbers is %lld\n", n, sum(n));
        }
    }
    else {
        printf("only numbers are allowed\n");
    }
    return 0;
}
