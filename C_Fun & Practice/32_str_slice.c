# include <stdio.h>
# include <stdlib.h>
char* slice(char* str, int n, int m) {
    char* st = malloc((m - n + 2) * sizeof(char));
    int k = 0;
    for (int i = n; i <= m && str[i] != '\0'; i++) {
        st[k] = str[i];
        k++;
    }
    st[k] = '\0';
    return st;
}
int main() {
    char *result = slice("hello world", 4, 9);
    printf("%s\n", result);
    free(result);
    return 0;
}
