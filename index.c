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
    while (i >= 0 && str[i] == ' ') {
        i--;
    }
    while (i >= 0 && str[i] != ' ') {
        length++;
        i--;
    }

    return length;
}
int main() {
     char *str = "Hello Shakhzoda";
    int length = lengthOfLastWord(str);
    printf("Length of the last word: %d", length);

    return 0;
}


// Third exersice from leetcode

                                                                // NEW TOPIC  STRUCTURES

// #include <stdio.h>
// #include <stdlib.h>
// #include<string.h>

//  typedef struct a_book
// {
// char*name;
// int year;
// char*author;
// char*mainperson;
// } book;

// int main(){
//    book*a_book = (book*)malloc(sizeof(book));
//     a_book->author=malloc(sizeof(char)*30);
//     a_book->name=malloc(sizeof(char)*23);
//     a_book->year=2020;
//     a_book->mainperson=malloc(sizeof(char)*20);
//     strcpy(a_book->author,"Fyodor Dostoyeviskiy");
//     strcpy(a_book->name,"Jinoyat va Jazo");
//     strcpy(a_book->mainperson,"Rodion Raskolnikovning");
//     printf("%s\n", a_book->author);
//     printf("%s\n", a_book->name);
//     printf("%d\n", a_book->year);
//     printf("%s\n",a_book->mainperson);

//     return 0;
// }
