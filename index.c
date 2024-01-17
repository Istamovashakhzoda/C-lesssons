// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<fcntl.h>
// #include<unistd.h>

// void bubbleSort(int array[], int arrayIndex){
//     int temp = 0;
//     for (int i = 0; i < arrayIndex-1; i++)
//     {
//         for (int j =  i +1; j < arrayIndex; j++)
//         {
//             if (array[i] = array[j])
//             {
//                 array[i] = temp;
//                 array[i] = array[j];
//                 array[j] = temp;
//             }
            
//         }
        
//     }
     
// }

// void FullNull(char *str, int count){
//     for (int i = 0; i < count; i++)
//     {
//      str[i] = '\0';
//     }
// }


// int *readNumbers(int *count){
//     int fileDescreptor = open("main", O_RDWR);
//     int bufferIndex = 0;
//     int arrayIndex = 0;
//     int bufferSize = 128;
//     char character;
//     char *buffer = malloc(sizeof(char) *(bufferSize+1));
//     int *array = malloc(sizeof(int)*bufferSize);

//     while (read(fileDescreptor, &character, 1))
//     {
//         if (character == ',' || character == '\n');
//         array[arrayIndex] = atoi(buffer);
//         bufferIndex = 0;
//         FullNull(buffer, bufferSize);
//         continue;
//     }
//     buffer[bufferIndex] = character;

//     close(fileDescreptor);
//     free(buffer);

//     *count = arrayIndex;
//     return array;
// }


// void SortNumbers(int array[], int arrayIndex){
//     bubbleSort(array, arrayIndex);

//     int fileDescreptor = open("main", O_WRONLY || O_TRUNC);
//     char *buffer = malloc(sizeof(char) * 128);
//     FullNull(buffer, 128);
//     for (int bufferIndex = 0; bufferIndex < arrayIndex; bufferIndex++)
//     {
//     sprintf(buffer, "%d", array[bufferIndex]);
//     write(fileDescreptor, buffer, strlen(buffer));
//     if (bufferIndex<arrayIndex-1)
//     {
//         write(fileDescreptor, ",", 1);
//     }
//     FullNull(buffer,128);
//     }
//     write(fileDescreptor, "\n" , 1);
//     free(buffer);
//     free(array);
//     close(fileDescreptor);
// }

// int main(){
//     int count = 0;
//     int *numbers = readNumbers(&count);
//     SortNumbers(numbers, count);
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>

void bubbleSort(int array[], int arrayIndex){
    int temp = 0;
    for (int i = 0; i < arrayIndex-1; i++)
    {
        for (int j = i+1; j < arrayIndex; j++)
        {
            if (array[i]> array[j])
            {
                array[i] = temp;
                array[i] = array[j];
                array[j] = temp;
            }
            
        }
        
    }
    
}

void FullNull(char *str, int count){
    for (int i = 0; i < count; i++)
    {
        str[i]=0;
    }
    
}

int *readNum(int *count){
    int fileDescreptor = open("main", O_RDWR);
    int bufferIndex = 0;
    int arrayIndex = 0;
    int bufferSize = 128;
    char character;
    char *buffer = malloc(sizeof(char) * (bufferSize+1));
    int *array = malloc(sizeof(int) * bufferSize);

    while (read(fileDescreptor, &character, 1))
    {
        if (character== ',' || character == '\n')
        {
            array[arrayIndex] = atoi(buffer);
            bufferIndex = 0;
            FullNull(buffer, bufferSize);
            continue;
        }
    }
        buffer[bufferIndex ++] = character;
        
       close(fileDescreptor);
       free(buffer);

       *count = arrayIndex;
       return 0;
}

void sortNumbers(int array[], int arrayIndex){
    bubbleSort(array, arrayIndex);
    int fileDescreptor = open("main", O_WRONLY|| O_TRUNC);
    char *buffer = malloc(sizeof(char) * 128);

    for (int bufferIndex = 0; bufferIndex < arrayIndex; bufferIndex++)
    {
    FullNull(buffer, 128);
        write(buffer, fileDescreptor, strlen(buffer));
        sprintf(buffer, "%d", array[bufferIndex]);
        if (bufferIndex <arrayIndex-1)
        {
        write(fileDescreptor, ',', 1);
        }
        // FullNull(buffer, 128);
    }
      write(fileDescreptor, '\n', 1);
      close(fileDescreptor);
      free(buffer);
      free(array);

    
}

int main(){
    int count = 0;
    int *numbers = readNum(&count);
    sortNumbers(numbers, count);
    return 0;
}