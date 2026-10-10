# include <stdio.h>
struct complex { float r, i; };
void printc(struct complex c[], int l) {
    for (int j = 0; j < l; j++) {
        printf("real: %.2f, imaginary: %.2f.\n", c[j].r, c[j].i);
    }
}
int main() {
    struct complex arrc[5];
for (int j = 0; j < 5; j++) {
        printf("enter the value of real and imaginary separating by comma\n");
        scanf("%f, %f", &arrc[j].r, &arrc[j].i);
    }
    printc(arrc, 5);
    return 0;
}
