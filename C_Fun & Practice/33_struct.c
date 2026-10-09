# include <stdio.h>
struct vactor2d { int i,j};
int main() {
    struct vactor2d v2d = {1, 1};
    printf("%d, %d\n", v2d.i, v2d.j);
   return 0;
}
