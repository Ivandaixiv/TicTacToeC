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

    printf("userRows: %d , userCol: %d\n", userRows, userCol);
    // bool gridRow[3];
}