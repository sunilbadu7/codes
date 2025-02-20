#include <stdio.h>
#include <math.h>
int main() {
    double x, sum = 0, term;
    int terms;

    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for (int i = 0; i < terms; i++) {
        double fact = 1;
        for (int j = 1; j <= 2 * i + 1; j++) {
            fact *= j;
        }
        term = pow(-1, i) * pow(x, 2 * i + 1) / fact;
        sum += term;
    }

    printf("sin(%lf) = %lf\n", x, sum);
    return 0;
}
