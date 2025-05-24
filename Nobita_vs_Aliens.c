#include <stdio.h>

int main() {
    int n, K;
    scanf("%d %d", &n, &K);

    int tanks[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tanks[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        int min_Index = i;
        for (int j = i + 1; j < n; j++) {
            if (tanks[j] < tanks[min_Index]) {
                min_Index = j;
            }
        }
        int temp = tanks[i];
        tanks[i] = tanks[min_Index];
        tanks[min_Index] = temp;
    }
    int left = 0, right = n - 1;
    int shots = 0;
    while (left < right) {
        if (tanks[left] + tanks[right] <= K) {
            shots++;
            left++;
            right--;
        } else {
            right--;
        }
    }

    printf("%d\n", shots);

    return 0;
}
