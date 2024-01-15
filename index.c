// #include <stdio.h>                                                       
// #include <fcntl.h> 
// #include <stdlib.h> 
// #include <unistd.h>
// #include <string.h>

// void bubbleSort(int array[], int arrayIndex) {
//     int temp = 0;
//     for (int i = 0; i < arrayIndex - 1; i++) {
//         for (int j = i + 1; j < arrayIndex; j++) {
//             if (array[i] > array[j]) {
//                 temp = array[i];
//                 array[i] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
// }
// void fillNull(char *str, int count) {
//     for (int i = 0; i < count; i++) {
//         str[i] = '\n';
//     }
// }
// int* readNumbers(int* count) {
//     int fileDescriptor = open("main", O_RDWR);
//     int bufferIndex = 0;
//     int arrayIndex = 0;
//     int bufferSize = 128;
//     char character;
//     char *buffer = malloc(sizeof(char) * (bufferSize + 1));
//     int *array = malloc(sizeof(int) * (bufferSize + 1));
//     while (read(fileDescriptor, &character, 1)) {
//         if (character == ',' || character == '\n') {
//             array[arrayIndex++] = atoi(buffer);
//             bufferIndex = 0;
//             fillNull(buffer, bufferSize);
//             continue;
//         }
//         buffer[bufferIndex++] = character;
//     }
//     close(fileDescriptor);
//     free(buffer);
//     *count = arrayIndex;
//     return array;
// }

// void sortNumbers(int array[], int arrayIndex) {
//     bubbleSort(array, arrayIndex);
//     int fileDescriptor = open("main", O_WRONLY | O_TRUNC);
//     char *buffer = malloc(sizeof(char) * 128);
//     for (int bufferIndex = 0; bufferIndex < arrayIndex; bufferIndex++) {
//         fillNull(buffer, 128);
//         sprintf(buffer, "%d", array[bufferIndex]);
//         write(fileDescriptor, buffer, strlen(buffer));
//         if (bufferIndex < arrayIndex - 1) {
//             write(fileDescriptor, ",", 1);
//         }
//     }
//     write(fileDescriptor, "\n", 1);
//     free(buffer);
//     free(array);
//     close(fileDescriptor);
// }

// int main() {
//     int count = 0;
//     int *numbers = readNumbers(&count);
//     sortNumbers(numbers, count);
//     return 0;
// }

// My code when i try to write this...
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h> // Added for strlen()

void bubbleSort(int arr[], int arrIndex) {
    int temp = 0;
    for (int i = 0; i < arrIndex - 1; i++) {
        for (int j = i + 1; j < arrIndex; j++) { // Fixed the typo here
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void fillNull(char *str, int count) { // Renamed the function to follow lowercase naming convention
    for (int i = 0; i < count; i++) {
        str[i] = '\0'; // Fixed the assignment to null character
    }
}

int *readNumbers(int *count) {
    int fileDescriptor = open("main", O_RDWR); // Removed the extra comma
    int bufferIndex = 0;
    int arrIndex = 0;
    int bufferSize = 128;
    char character;
    char *buffer = malloc(sizeof(char) * (bufferSize + 1));
    int *arr = malloc(sizeof(int) * bufferSize); // Changed the size to bufferSize

    while (read(fileDescriptor, &character, 1)) {
        if (character == ',' || character == '\n') { // Changed the comparison operator
            arr[arrIndex++] = atoi(buffer);
            bufferIndex = 0;
            fillNull(buffer, bufferSize);
            continue;
        }
        buffer[bufferIndex++] = character;
    }
    close(fileDescriptor);
    free(buffer);

    *count = arrIndex;
    return arr;
}

void sortNums(int arr[], int arrIndex) {
    bubbleSort(arr, arrIndex);

    int fileDescriptor = open("main", O_WRONLY | O_TRUNC);
    char *buffer = malloc(sizeof(char) * 128);

    for (int bufferIndex = 0; bufferIndex < arrIndex; bufferIndex++) {
        fillNull(buffer, 128);
        sprintf(buffer, "%d", arr[bufferIndex]);
        write(fileDescriptor, buffer, strlen(buffer));
        if (bufferIndex < arrIndex - 1) {
            write(fileDescriptor, ",", 1); // Added the correct length for the comma
        }
    }
    write(fileDescriptor, "\n", 1); // Added the correct length for the new line

    free(buffer);
    free(arr);
    close(fileDescriptor);
}

int main() {
    int count = 0;
    int *numbers = readNumbers(&count);
    sortNums(numbers, count);

    return 0;
}