# include <stdio.h>
int main() {
    int age;
    printf("enter your age\n");
    int c = scanf("%d", &age);
    if (c) {
        int* ptr = &age;
        printf("your age is stored at address %p and your age at address %p is %d\n", ptr, ptr, *ptr);
    }
    else {
        printf("age must be a number\n");
    }
    return 0;
}
