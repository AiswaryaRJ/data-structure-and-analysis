#include <stdio.h>
void fastTranspose(int sparse[MAX][3], int transpose[MAX][3]) {
    int row_terms[MAX], start_pos[MAX];
    int i, j, num_cols, num_terms;
    num_cols = sparse[0][1];
    num_terms = sparse[0][2];

    transpose[0][0] = sparse[0][1];
    transpose[0][1] = sparse[0][0];
    transpose[0][2] = num_terms;

    for (i = 0; i < num_cols; i++)
        row_terms[i] = 0;

    for (i = 1; i <= num_terms; i++)
        row_terms[sparse[i][1]]++;

    start_pos[0] = 1;
    for (i = 1; i < num_cols; i++)
        start_pos[i] = start_pos[i - 1] + row_terms[i - 1];

    for (i = 1; i <= num_terms; i++) {
        j = start_pos[sparse[i][1]]++;
        transpose[j][0] = sparse[i][1];
        transpose[j][1] = sparse[i][0];
        transpose[j][2] = sparse[i][2];
    }
}

void printSparse(int matrix[MAX][3]) {
    int i;
    printf("Row Col Value\n");
    for (i = 0; i <= matrix[0][2]; i++)
        printf("%3d %3d %5d\n", matrix[i][0], matrix[i][1], matrix[i][2]);
}

int main() {
    int sparse[MAX][3] = {
        {3, 3, 3},
        {0, 2, 5},
        {1, 1, 8},
        {2, 2, 3}
    };

    int transpose[MAX][3];

    printf("Original Sparse Matrix:\n");
    printSparse(sparse);

    fastTranspose(sparse, transpose);

    printf("\nTransposed Sparse Matrix:\n");
    printSparse(transpose);

    return 0;
}

