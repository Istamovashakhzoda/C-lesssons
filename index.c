#include <stdio.h>
#include <string.h>
// int main(int*nums, int*numsSize, int target, int*returnSize){
//     i= 0;
//     j=i+1;
//     size1 = returnSize;
//     size2=numsSize;
//     while (i <size2 -1)
//     {
//     }

//     }
// int main()
// {
//     int a = 9;
//     int b = 5;
//     int c = 3;
//     if (a > b &&b < c)
//     {
//         printf("small\n");
//     }
//     else if (a > c && b != c)
//     {
//         printf("nor big nor small\n");
//     }
//     else
//     {
//         printf("this number is big\n");
//     }
//     return 0;
// }

// eng kichik sonni chiqarish if else bilan

// int main()
// {
//     char str[6] = "hello";
//     int row = strlen(str);
//     int step = 1;
//     int i = 0;
//     while (step <= row)
//     {
//         i = 0;
//         while (i < step)
//         {
//             printf("%c", str[i]);
//             i++;
//         }
//         printf("\n");
//         step++;
//     }

//     return 0;
// }
// int i = 0;
// while (str[i] ! = '\0')
// {
//     printf("%c\n", str[i]);
//     i++;
// }

// int maxProduct()
// {
//     int maxProduct(int*nums, int numsSize){
//     int i=0;
//     for (int i = 0; i < numsSize(); i++);
//     {
//        for (int j = i+1; j < numsSize(); j++);
//        {
//        ans max(ans (nums[i]-1)*(nums[j]-1));
//        }

//     }

//  return ans;
// }
// abc
// b c a
//   return 0;
// }
//  a b c
// b c a
// c a b
// a b c
// qilib kelish

// void swap(int*p1, int*p2){
//     int temp =*p1;
//     *p1=*p2;
//     *p1=temp;
// }

// int main(){
//   int a = 4;
//   int b = 8;
//   printf("%d %d\n" ,a,b);
//   swap(&a, &b);
//   return 0;
// }

// enter = 10, enter = '\n'
// null = 0, null = '\0'

// int my_strlen(char *str)
// {
//     int count = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }

// char *my_revers(char *str)
// {
//     int len = my_strlen(str);
//     char c;
//     for (int i = 0; i < len / 2; i++)
//     {
//         c = str[i];
//         str[i] = str[len - i - 1];
//         str[len - i - 1] = c;
//         printf("%s\n", str);
//        int sleep('1');
//     }
//     return &str[0];
// }

// int main()
// {
//     static char str[] = "hello";
//     printf("%s\n", my_revers(&str[0]));
//     return 0;
// }

// void mult_elements(int* arr, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] *= 2;
//     }
// }

// int main()
// {
//     int arr[] = {2,3,4,5,6};
//     mult_elements(arr, 5);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }
// togri

// int factorial(int n) {
//     int result = 1;

//     for (int i = 1; i <= n; i++) {
//         result *= i;
//     }

//     return result;
// }

// int main() {
//     int number = 8;
//     int result = factorial(number);
//     printf("%d\n", result);

//     return 0;
// }
// xato

// int main()
// {
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d", j);
//         }
//     }
//     printf("\n");

//     return 0;
// }
// xato

// int main()
// {
//     int a=10, *j;
//     void *k;
//     j=k=&a;
//     j++;
//     k++;
//     printf("%u %u\n", j, k);
//     return 0;
// }
// togri

// int main()
// {
//     int x = 10, y = 100%90, i;
//     for(i=1; i<10; i++)
//     if(x != y)
//         printf("x = %d y = %d\n", x, y);
//     return 0;
// }
// togri

// int function1(int k)
// {
//     k++;
//     return k;
// }

// int main()
// {
//     int k=30;
//     k = function1(k=function1(k=function1(k)));
//     printf("k=%d\n", k);
//     return 0;
// }
// xato

// int main()
// {
//     char str[] = "Nagpur";
//     str[0]='K';
//     printf("%s, ", str);
//     char str []= "Kanpur";
//     printf("%s", str+1);
//     return 0;
// }
// xato

// int main()
// {
//     int arr[2][4];

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             arr[i][j] = j + 1;
//         }
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//     }
//     printf("\n");     

//     return 0;
// }

function destCity(paths) {
  const outgoing = new Set(); 

  for (let i = 0; i < paths.length; i++) {
    outgoing.add(paths[i][0]); 
  }

  for (let i = 0; i < paths.length; i++) {
    if (!outgoing.has(paths[i][1])) {
      return paths[i][1]; 
    }
  }
}
const paths = [["London", "New York"], ["New York", "Lima"], ["Lima", "Sao Paulo"]];
const destination = destCity(paths);
console.log(destination); 