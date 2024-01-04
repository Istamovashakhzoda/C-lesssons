#include <stdio.h>
// int select(int arr[], int n) {
//     if (n == 0) {
//         return 0; 
//     }

//     int integer = 1; 

//     for (int i = 1; i < n; i++) {
//         if (arr[i] != arr[i-1]) {
//             arr[integer] = arr[i];
//             integer++;
//         }
//     }

//     return integer;
// }

// int main() {
//     int arr[] = {1,1, 2, 2, 3, 4, 4, 4, 5, 6, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//      int lenght =select()

//     for (int i = 0; i < lenght; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


// The second exercise
    // int lenght = select(arr, n);

// #include <stdio.h>
// #include <string.h>

// int uncommon( char *str) {
//     int length = 0;
//     int i = strlen(str) - 1;
//     while (i >= 0 && str[i]!= ' ') {
//         length++;
//         i--;
//     }

//     return length;
// }
// int main() {
//      char *str = "Hello Shakhzoda";
//     int length = uncommon(str);
//     printf("%d", length);

//     return 0;
// }

//    MOVE ZEROES TASK FROM LEETCODE😭


// void data(int arr[], int lenght);

// int main(){
//     int num[] = {0,9,0,8,5,0,3,0,1,0};
//     int lenght = 11;
//     for (int i = 0; i < lenght; i++)
//     {
//       printf("%d\n", num[i]);
//       return 0;  
//     }
    
//     void shift_zeros(int arr, int lenght){
//         int coutn =0;
//         for (int i = 0; i < lenght; i++);
//         {
//             if (arr[i] != 0);
//        {
//            arr[coutn] = arr[i];
//            coutn++;
//         }
//         }
//         for (int i = coutn; i < lenght; i++)
//         {
//               arr[i] = 0;
//         }
        
        
//     }
    
//     return 0;
// }



// #include <stdio.h>

// void shift_zeros(int arr[], int length) {
//     int count = 0;
//     for (int i = 0; i < length; i++) {
//         if (arr[i] != 0) {
//             arr[count] = arr[i];
//             count++;
//         }
//     }
    
//     for (int i = count; i < length; i++) {
//         arr[i] = 0;
//     }
// }

// int main() {
//     int num[] = {0, 9, 0, 8, 5, 0, 3, 0, 1, 0};
//     int length = 10;  

//     printf("Original Array: ");
//     for (int i = 0; i < length; i++) {
//         printf("%d ", num[i]);
//     }
//     printf("\n");

//     shift_zeros(num, length);

//     printf("Array after shifting zeros: ");
//     for (int i = 0; i < length; i++) {
//         printf("%d ", num[i]);
//     }
//     printf("\n");

//     return 0;
// }















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

// #include <stdio.h>
// #include <stdlib.h>

// int* make_array()
// {
//     int* arr = malloc(sizeof(int) * 10);
//     int ind = 0;
//     for (int i = -10; i < 0; i++)
//     {
//         arr[ind] = i;
//         ind++;
//     }
//     return arr;
// }

// int main()
// {
//     int* arr = make_array();

//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     free(arr);
// }

// ONE PLUS TASK FROM LEETCODE

// #include <stdio.h>
// #include <stdlib.h>

// int *digit(int* digits, int digitSize, int*returnSize){
//     int*result=(int*)malloc((digitSize+1)*sizeof(int));
//     int plus = 1;
//     for (int i = 0; i < digitSize-1; i>=0 i--){
//         int sum = digits[i]+plus;
//         result[i+1] = sum 10;
//         plus= sum/10;
//     }
//     if (plus >0)
//     {  
//      result[0] = carry;
//      returnSize=digitSize+1;     
//     }
//     else
//     {
//         for(int i=0; i < digitSize; i++){
//             result[i]=digitSize[i]
//         }
//         returnSize=digitSize;
//     }
    
//     return result;
    
// }

// int main(){
//     int digits[]={1,2,3,4};
//     int digitSize = sizeof(digits)/sizeof(digits[0]);
//     int returnSize;
//     int* result = plusOne(digits, digitSize, returnSize);
//     printf("");
//     for (int i = 0; i < returnSize; i++)
//     {
//     printf("%d", result[i])    
//     }
//     printf("\n");
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>


// int *digit(int* digits, int digitSize, int* returnSize){
// 	int*result=(int*)malloc((digitSize+1)*sizeof(int));
// 	int plus = 1;
// 	for (int i = 0; i < digitSize-1;  i--){
// 	int sum = digits[i]+plus;
// 	result[i+1] = sum %10;
// 	plus= sum/10;
// 	     }
// 	     if (plus >0)
// 	     {  
// 	      result[0] = plus;
// 	      *returnSize = digitSize+1;     
// 	     }
// 	     else
// 	     {
// 	         for(int i=0; i < digitSize; i++){
// 	          result[i]=digits[i];
// 	         }
// 	         *returnSize=digitSize;
// 	     }
	    
// 	     return result;
	    
// 	 }
	
// 	 int main(){
// 	     int digits[]={1,2,3,4};	   
//          int digitSize = sizeof(digits)/ sizeof(digits[0]);
//         int returnSize;
// 	     int* result = digit(digits, digitSize, &returnSize);
// 	     printf("Result: ");
// 	     for (int i = 0; i < returnSize; i++)
// 	     {
// 	     printf("%d", result[i]);  
// 	     }
// 	     printf("\n");
//      return 0;
// 	 }


// int* digit(int* digits, int digitSize, int* returnSize) {
//     int* result = (int*)malloc((digitSize + 1) * sizeof(int));
//     int plus = 1;
//     for (int i = digitSize - 1; i >= 0; i--) {
//         int sum = digits[i] + plus;
//         result[i + 1] = sum % 10;
//         plus = sum / 10;
//     }
//     if (plus > 0) {
//         result[0] = plus;
//         *returnSize = digitSize + 1;
//     } else {
//         for (int i = 0; i < digitSize; i++) {
//             result[i] = digits[i];
//         }
//         *returnSize = digitSize;
//     }
//     return result;
// }

// int main() {
//     int digits[] = {1, 2, 3, 4};
//     int digitSize = sizeof(digits) / sizeof(digits[0]);
//     int returnSize;
//     int* result = digit(digits, digitSize, &returnSize);
//     printf("Result: ");
//     for (int i = 0; i < returnSize; i++) {
//         printf("%d ", result[i]);
//     }
//     printf("\n");
//     free(result);
//     return 0;
// }