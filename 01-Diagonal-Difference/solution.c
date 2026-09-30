#include <stdio.h>
#include <stdlib.h>

// Complete the diagonalDifference function below.
int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int left_sum = 0;
    int right_sum = 0;
    
    for (int i = 0; i < arr_rows; i++) {
        // Primary diagonal element: arr[i][i]
        left_sum += arr[i][i];
        
        // Secondary diagonal element: arr[i][n - 1 - i]
        right_sum += arr[i][arr_rows - 1 - i];
    }
    
    // Return the absolute difference
    return abs(left_sum - right_sum);
}