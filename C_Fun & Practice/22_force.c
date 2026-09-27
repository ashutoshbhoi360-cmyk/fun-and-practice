# include <stdio.h>
float force(float m) {
    return m*9.8;
}
int main() {
    float m;
    printf("enter the mass to calculate the force\n");
    int c = scanf("%f", &m);
    if (c) {
        printf("force = %.3f\n", force(m));
    }
    else {
        printf("number only please\n");
    }
    return 0;
}
