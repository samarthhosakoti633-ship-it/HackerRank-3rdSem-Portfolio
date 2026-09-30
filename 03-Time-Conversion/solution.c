#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
char* timeConversion(char* s) {
    int hour, minute, second;
    char period[3];
    
    // Parse the input string into hours, minutes, seconds, and period (AM/PM)
    sscanf(s, "%d:%d:%d%s", &hour, &minute, &second, period);
    
    // Convert 12-hour format to 24-hour format
    if (strcmp(period, "PM") == 0 && hour != 12) {
        hour += 12;
    } else if (strcmp(period, "AM") == 0 && hour == 12) {
        hour = 0;
    }
    
    // Allocate memory for the result string (HH:MM:SS needs 9 bytes including '\0')
    char* result = (char*)malloc(9 * sizeof(char));
    sprintf(result, "%02d:%02d:%02d", hour, minute, second);
    
    return result;
}

int main() {
    char s[20];
    scanf("%s", s);
    
    char* result = timeConversion(s);
    
    printf("%s\n", result);
    
    // Free the dynamically allocated memory
    free(result);
    
    return 0;
}