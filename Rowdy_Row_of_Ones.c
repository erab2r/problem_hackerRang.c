#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);  // Read number of rows and columns

    int matrix[1000][1000];

    // Read matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxOnes = -1;
    int maxRowIndex = -1;

    // Loop through each row using for loop
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 1) {
                count = m - j;  // All remaining are 1s because row is sorted
                break; // No need to check further in this row
            }
        }

        // Update if this row has more 1s
        if (count > maxOnes) {
            maxOnes = count;
            maxRowIndex = i;
        }
    }

    printf("%d\n", maxRowIndex);
    return 0;
}
