#include <studio.h>
#include <string.h>

// int main()
// {
//     int a = 9;
//     int b = 5;
//     int c = 3;
//     if (a < b &&b = c)
//     {
//         printf("small");
//     }
//     else if (a < c && b != c)
//     {
//         printf("nor big nor small");
//     }
//     else
//     {
//         printf("this number is big");
//     }
//     return 0;
// }

// eng kichik sonni chiqarish if else bilan

int main()
{
    char str[6] = "hello";
    int row = strlen(str);
    int step = 1;
    int i = 0;
    while (step <= row)
    {
        i = 0;
        while (i < step)
        {
            printf("%c", str[i]);
            i++;
        }
        printf("\n");
        step++;
    }

    return 0;
}
// int i = 0;
// while (str[i] ! = '\0')
// {
//     printf("%c\n", str[i]);
//     i++;
// }