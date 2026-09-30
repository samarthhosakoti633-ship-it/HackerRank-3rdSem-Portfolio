#include <stdio.h>
#include <stdlib.h>

/*
 * Complete the 'compareTriplets' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */
int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    // Allocate memory for the result array containing Alice's and Bob's scores
    int* result = (int*)malloc(2 * sizeof(int));
    result[0] = 0; // Alice's score
    result[1] = 0; // Bob's score
    *result_count = 2;
    
    // Compare each element of the triplets
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            result[0]++; // Alice gets a point
        } else if (a[i] < b[i]) {
            result[1]++; // Bob gets a point
        }
        // If a[i] == b[i], neither gets a point
    }
    
    return result;
}

int main() {
    int a[3];
    int b[3];
    
    // Read Alice's triplet ratings
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    
    // Read Bob's triplet ratings
    for (int i = 0; i < 3; i++) {
        scanf("%d", &b[i]);
    }
    
    int result_count;
    int* result = compareTriplets(3, a, 3, b, &result_count);
    
    // Print the output space-separated
    for (int i = 0; i < result_count; i++) {
        printf("%d", result[i]);
        if (i != result_count - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    // Free allocated memory
    free(result);
    
    return 0;
}