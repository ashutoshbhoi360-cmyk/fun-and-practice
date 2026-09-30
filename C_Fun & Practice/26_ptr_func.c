# include <stdio.h>
void pd(int *a) {
    printf("the address of age from function is %p\n", a);
}
int main() {
    int age = 14;
    printf("the direct address of age is %p\n", &age);
    pd(&age);
return 0;
}
