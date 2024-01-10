#include <stdio.h>

int binomialCoefficient(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    } else {
        return binomialCoefficient(n - 1, r - 1) + binomialCoefficient(n - 1, r);
    }
}

int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    printf("The binomial coefficient of %d and %d is %d\n", n, r, binomialCoefficient(n, r));
    return 0;
}
