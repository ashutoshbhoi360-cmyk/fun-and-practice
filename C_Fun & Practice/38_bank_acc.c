# include <stdio.h>

struct bank_acc {
    char name[51];
    int acc_id;
    float bal;
};

int main() {
    struct bank_acc bankacc = {"ashutosh", 101, 10000};
    printf("name: %s, id: %d, balance: %.3f...\n", bankacc.name, bankacc.acc_id, bankacc.bal);
    return 0;
}
