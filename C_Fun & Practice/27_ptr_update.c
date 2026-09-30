# include <stdio.h>
void upnum(int *num) {
    *num *= 10;
}
int main() {
    int roll_number = 4;
    printf("roll number before updating is %d\n", roll_number);
    upnum(&roll_number);
    printf("roll number after updating is %d\n", roll_number);
    return 0; 
}
