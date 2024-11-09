#include <stdio.h>
#include <string.h>
struct bank_account
{
    char name[10];
    char gender;
    char address[25];
    int mobile_no;
    float balance;
};

int main() {
    struct bank_account a1= {"Harry",'M',"Mayur Vihar Noida",877766335,10563.5};
    return 0;
}