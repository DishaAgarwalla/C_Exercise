#include <stdio.h>


void swap_strings(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Before swapping:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    
    swap_strings(&str1, &str2);

    printf("After swapping:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    return 0;
}
