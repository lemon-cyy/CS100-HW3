/* CS100 Fall 2026 - HW3 Problem 2: Palindrome
 *
 * Read n strings and test whether each of them is a palindrome.
 * Print "Yes" / "No" on one line per string.
 * Use dynamic memory to store each input string (no fixed-size arrays).
 * Do not rename this file.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    /* TODO: your code here */
    int n;
    if (scanf("%d", &n) != 1){
        return 0;
    }
    for (int i = 0; i < n; i++){
        int length;
        scanf("%d", &length);
        char *str = (char *)malloc((length + 1) * sizeof(char));
        if (str == NULL){
            return 1; 
        }
        scanf("%s", str);
        int is_palindrome = 1;
        for (int j = 0; j < length / 2; j++){
            if (str[j] != str[length - 1 - j]){
                is_palindrome = 0;
                break;
            }
        }
        if (is_palindrome){
            printf("Yes\n");
        } 
        else{
            printf("No\n");
        }
        free(str);
    }
    return 0;
}
