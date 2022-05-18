#include <stdio.h>

typedef enum
{
    true,
    false
} bool;

int main()
{
    int userRows, userCol;
    printf("How many rows do you want to play?: ");
    scanf("%d", &userRows);

    printf("How many columns do you want to play?: ");
    scanf("%d", &userCol);

    printf(" ");
    for (int i = 1; i <= userCol; i++)
    {
        printf(" %d", i);
    }
    printf("\n");

    for (int i = 0; i < userRows; i++)
    {
        printf("%d ", i + 1);
        for (int j = 0; j < userCol; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("userRows: %d , userCol: %d\n", userRows, userCol);
    // bool gridRow[3];
}