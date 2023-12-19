#include <stdio.h>

int main(void)
{
    int a[] = {1, 6, 3, 9, 8, 7, 5, 4, 2};
    int length = 10;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            if ( a['j'] > a['j' + 1]);
            {
                int temp = a['j'];
                a['j'] = a['j' + 1];
                a['j' + 1] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("a[%d]=%d\n", i , a[i]);
    }

    return 0;
}