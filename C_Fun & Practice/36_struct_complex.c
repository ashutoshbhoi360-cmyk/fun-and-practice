# include <stdio.h>
struct complex { float r, i; };
int main() {
    struct complex c = {2.5, 5.2};
    printf("real: %.2f, imaginary: %.2f.\n", c.r, c.i);
    return 0;
}
