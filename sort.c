#include <stdio.h>
#include <string.h>


void swap(char *str1, char *str2) {
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}


void sortStrings(char arr[][100], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);

    char names[n][100];
    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++)      
    {
        scanf("%s", names[i]);
    }

    sortStrings(names, n);

    printf("Sorted names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
