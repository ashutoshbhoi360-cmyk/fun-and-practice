# include <stdio.h>
int length(char str[]) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}
int main() {
    char name[] = "ashutosh";
    printf("the name \"Ashutosh\" has %d characters\n", length(name));
    return 0;
}
