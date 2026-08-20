#include <stdio.h>

int main() {
    float food, travel, study, other, total;

    printf("===== STUDENT EXPENSE TRACKER =====\n\n");

    printf("Enter Food expense: ");
    scanf("%f", &food);

    printf("Enter Travel expense: ");
    scanf("%f", &travel);

    printf("Enter Study expense: ");
    scanf("%f", &study);

    printf("Enter Other expense: ");
    scanf("%f", &other);

    total = food + travel + study + other;

    printf("\n===== EXPENSE SUMMARY =====\n");
    printf("Food   : Rs. %.2f\n", food);
    printf("Travel : Rs. %.2f\n", travel);
    printf("Study  : Rs. %.2f\n", study);
    printf("Other  : Rs. %.2f\n", other);
    printf("---------------------------\n");
    printf("Total  : Rs. %.2f\n", total);

    return 0;
}
