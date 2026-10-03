# include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    printf("the third element is %d and value at address %p is also %d\n", arr[2], ptr + 2, *(ptr+2));
    return 0;
}
