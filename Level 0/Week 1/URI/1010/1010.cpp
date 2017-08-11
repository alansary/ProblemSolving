#include<stdio.h>
using namespace std;
int main() {
    int code_product1, num_units_product1, code_product2, num_units_product2;
    double price_unit_product1, price_unit_product2, amount_paid;
    scanf("%d%d%lf", &code_product1, &num_units_product1, &price_unit_product1);
    scanf("%d%d%lf", &code_product2, &num_units_product2, &price_unit_product2);
    amount_paid = num_units_product1 * price_unit_product1 + num_units_product2 * price_unit_product2;
    printf("VALOR A PAGAR: R$ %.2lf\n", amount_paid);
    return 0;
}
