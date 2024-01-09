// #include <fcntl.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

// int main() {
//     int fd = open("main", O_RDONLY);
//     char c;
//     while(read(fd, &c, 1)){
//         printf("%c", c);
//     }
//     ssize_t filedesc = write(fd, "Hello world", 11);
//     close(fd);

//     return 0; 
// }

#include<stdio.h>

void sort(int array[], int size){
    for (int i = 0; i < size; i++)
    {
    for (int j = 0; j < size; j++)
{
     if (array[j]>array[j+1])
     {
        int temp = array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
     }
     
}
    }
    
}

void print(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
    
}

int main(){
    int array[]={9,1,8,2,7,3,6,4,5};
    int size = sizeof(array)/sizeof(array[1]);

    sort(array,size);
    print(array,size);

    return 0;
}