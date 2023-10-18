#include <stdio.h>

int main()
{
    int p, n, d, q;
    int total_p, total_n, total_d, total_q;
    int total_cents;
    
    printf("Enter pennies: ");
    scanf("%d", &p);
    total_p = (p * 1);
    printf("Total pennies = %d cents\n", total_p);
    
    printf("Enter nickels: ");
    scanf("%d", &n);
    total_n = (n * 5);
    printf("Total nickels = %d cents\n", total_n);
    
    printf("Enter dimes: ");
    scanf("%d", &d);
    total_d = (d * 10);
    printf("Total dimes = %d cents\n", total_d);
    
    printf("Enter quarters: ");
    scanf("%d", &q);
    total_q = (q * 25);
    printf("Total quarters = %d cents\n", total_q);

    total_cents = (p * 1) + (n * 5) + (d * 10) + (q * 25);
    printf("Total cents = %d", total_cents);

    return 0;
}