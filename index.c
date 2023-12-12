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

int maxProduct()
{
    int maxProduct(int*nums, int numsSize){
    int ans=0;
    for (int i = 0; i < numsSize(); i++)
    {
       for (int j=i+1; j < numsSize(); j++)
       {
       ans max(ans, (nums[i]-1)*(nums[j]-1));
       }
       
    }

 return ans;   
}

}
    // ans max((nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12)