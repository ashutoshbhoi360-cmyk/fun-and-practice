# include <stdio.h>
struct vector2d { int i,j};
int main() {
    struct vector2d v2d = {1, 1};
    printf("%d, %d\n", v2d.i, v2d.j);
   return 0;
}
