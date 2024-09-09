#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);
    int temp_a=a;
    int temp_b=b;
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    int hcf =a;
    printf("HCF = %d\n", hcf);
    int lcm=(temp_a*temp_b)/hcf;
    printf("lcm = %d",lcm);
    return 0;
}

