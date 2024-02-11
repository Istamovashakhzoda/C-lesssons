#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_strlen(char* str){
  int i = strlen(str);
  return i;
}
void fillArray(int* array, char* str){ 
    int index = 0; 
    while (str[index] != '\0'){ 
        if (str[index] != '"'){ 
            array[(int)str[index]] ++; 
        } 
        index ++; 
    } 
} 

void printArray(int* array, int sizeArray){ 
    int index = 0; 
    while (index < sizeArray){ 
        if (array[index] > 0){  
            printf("%c:%i\n", index, array[index]); 
        } 
        index ++; 
    } 
} 

int main(int argc, char** argv){ 
    int index = 1; 
    const int MAX_ARRAY_SIZE = 128;
    int array[128] = {0}; 

    while (index < argc){ 
        fillArray(array, argv[index]); 
        index ++; 
    } 
    printArray(array, MAX_ARRAY_SIZE); 

    return EXIT_SUCCESS; 
}