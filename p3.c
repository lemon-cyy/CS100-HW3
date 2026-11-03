/* CS100 Fall 2026 - HW3 Problem 3: String and character manipulation
 *
 * Implement the hw3_* functions below. Do NOT write a main function here:
 * the autograder compiles this file together with its own test driver.
 * Implementations must conform to the C standard (see cppreference) and
 * must not call any standard library string/character functions.
 * Do not rename this file.
 */
#include <stddef.h>

int hw3_islower(int ch)  { /* TODO */ return (ch >= 'a' && ch <= 'z'); }
int hw3_isupper(int ch)  { /* TODO */ return (ch >= 'A' && ch <= 'Z'); }
int hw3_isalpha(int ch)  { /* TODO */ return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')); }
int hw3_isdigit(int ch)  { /* TODO */ return (ch >= '0' && ch <= '9'); }
int hw3_tolower(int ch)  { /* TODO */ return (ch >= 'A' && ch <= 'Z') ? (ch + ('a' - 'A')) : ch; }
int hw3_toupper(int ch)  { /* TODO */ return (ch >= 'a' && ch <= 'z') ? (ch - ('a' - 'A')) : ch; }

size_t hw3_strlen(const char *str){
    size_t len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;}
char *hw3_strchr(const char *str, int ch){
    char target = (char)ch;
    while (*str != '\0') {
        if (*str == target){
            return (char *)str; 
        }
        str++;
    }
    if (target == '\0'){
        return (char *)str;
    }
    return NULL;
}
char *hw3_strcpy(char *dest, const char *src){
    char *original_dest = dest;
    while ((*dest = *src) != '\0') {
        dest++;
        src++;
    }
    return original_dest;
}
char *hw3_strcat(char *dest, const char *src){
    char *original_dest = dest;
    while (*dest != '\0') {
        dest++;
    }
    while ((*dest = *src) != '\0') {
        dest++;
        src++;
    }
    return original_dest;
}
int hw3_strcmp(const char *lhs, const char *rhs){
    while (*lhs != '\0' && *lhs == *rhs) {
        lhs++;
        rhs++;
    }
    return (unsigned char)*lhs - (unsigned char)*rhs;
}
