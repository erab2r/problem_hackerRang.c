#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int found = 0;

    for (int num = a; num <= b; num++) {
        int even = 0, odd = 0;
        int temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 == 0)
                even++;
            else
                odd++;
            temp /= 10;
        }

        if (even == odd) {
            printf("%d\n", num);
            found = 1;
        }
    }

    if (!found) {
        printf("-1\n");
    }

    return 0;
}
