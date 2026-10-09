# include <stdio.h>
struct vector2d { int i, j};
typedef struct vector2d vec;
vec sum_vec(vec v1, vec v2) {
    vec v3;
   v3.i = v1.i + v2.i;
    v3.j = v1.j + v2.j;
    return v3;
}
int main() {
    vec v1 = {4, 3};
    vec v2 = {3, 4};
    vec v3 = sum_vec(v1, v2);
    printf("v3.i = %d and v3.j = %d\n", v3.i, v3.j);
    return 0;
}
