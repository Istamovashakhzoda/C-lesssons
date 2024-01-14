#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void bubbleSort(int arr[], int n) {
    int i;
    int j;
    int temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int numbers[] = {5, 2,7, 8,4, 12, 1,3,9,0};
    int numElements = sizeof(numbers) / sizeof(numbers[0]);
    int file = open("main", O_WRONLY, 18);
    if (file == -1) {
        printf("\n");
        return 1;
    }
    bubbleSort(numbers, numElements);
    for (int i = 0; i < numElements; i++) {
        dprintf(file, "%d\n", numbers[i]);
    }
    close(file);
    printf("\n");
    return 0;
}






// #include <stdio.h>
// #include <fcntl.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>

// void fillNull(char *str, int count) {
//     for (int i = 0; i < count; i++) {
//         str[i] = '\0';
//     }
// }

// void readAndSortNumbers() {
//     int fileDescriptor = open("main", O_RDONLY);

//     int bufferIndex = 0;
//     int arrayIndex = 0;

//     int temp = 0;

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

//     for (int outer = 0; outer < arrayIndex - 1; outer++) {
//         for (int inner = outer + 1; inner < arrayIndex; inner++) {
//             if (array[outer] > array[inner]) {
//                 temp = array[outer];
//                 array[outer] = array[inner];
//                 array[inner] = temp;
//             }
//         }
//     }

//     fileDescriptor = open("main", O_WRONLY | O_TRUNC);

//     for (bufferIndex = 0; bufferIndex < arrayIndex; bufferIndex++) {
//         fillNull(buffer, bufferSize);
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
//     readAndSortNumbers();

//     return 0;
// }









// #include <fcntl.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

// void sort(int array[], int size){
//     for (int i = 0; i < size; i++)
//     {
//     for (int j = 0; j < size; j++)
// {
//      if (array[j]>array[j+1])
//      {
//         int temp = array[j];
//         array[j]=array[j+1];
//         array[j+1]=temp;
//      }
     
// }
//     }
    
// }
// void print(int array[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d\n", array[i]);
//     }
    
// }
// int main(){
//     int array[]={9,8,2,7,3,6,4,5,1};
//     int size = sizeof(array)/sizeof(array[1]);

//     sort(array,size);
//     print(array,size);

//     int fd = open("main", O_WRONLY);
//     ssize_t filedesc = write(fd, "9,1,8,2,7,3,6,4,5",11);
//     close(fd);

//     return 0;
// }
