//sum of n natural number
#include <stdio.h>
int main() {
    int n;
    printf("Enter no of terms:\n");
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}
