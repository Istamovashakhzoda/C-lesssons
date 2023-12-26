
// #include <stdio.h>
// int removeDuplicates(int arr[], int n) {
//     if (n == 0) {
//         return 0; 
//     }

//     int uniqueIndex = 1; 

//     for (int i = 1; i < n; i++) {
//         if (arr[i] != arr[i-1]) {
//             arr[uniqueIndex] = arr[i];
//             uniqueIndex++;
//         }
//     }

//     return uniqueIndex;
// }

// int main() {
//     int arr[] = {1,1, 2, 2, 3, 4, 4, 4, 5, 6, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int uniqueLength = removeDuplicates(arr, n);

//     for (int i = 0; i < uniqueLength; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


// The second exercise

#include <stdio.h>
#include <string.h>

int lengthOfLastWord( char *str) {
    int length = 0;
    int i = strlen(str) - 1;
    while (i >= 0 && str[i] != ' ') {
        length++;
        // i--;
    }

    return length;
}
int main() {
     char *str = "Hello Worldes";
    int length = lengthOfLastWord(str);
    printf("Length of the last word: %d", length);

    return 0;
}
    // while (i >= 0 && str[i] == ' ') {
    //     i--;
    // }