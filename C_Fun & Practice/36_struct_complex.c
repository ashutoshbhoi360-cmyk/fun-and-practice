# include <stdio.h>
struct complex { float r, i; };
typedef struct complex complex;
int main() {
    complex c = {2.5, 5.2};
    printf("real: %.2f, imaginary: %.2f.\n", c.r, c.i);
    return 0;
}
