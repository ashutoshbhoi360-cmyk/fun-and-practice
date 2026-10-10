# include <stdio.h>
struct student {
    char name[20];
    int roll_number;
};
int main() {
    struct student s1 = { "ashutosh", 14};
    struct student *spt = &s1;
    printf("name of the student is %s and roll number is %d.\n", spt->name, spt->roll_number);
    return 0;
}
