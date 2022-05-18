#include <stdio.h>
/**
 * TODO
 *
 * Limit user size to size of alphabet
 */
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
    for (int i = 0; i < userCol; i++)
    {
        printf(" %d", i + 1);
    }
    printf("\n");

    int ticTacGrid[userRows][userCol];
    for (int i = 0; i < userRows; i++)
    {
        for (int j = 0; j < userCol; j++)
        {
            ticTacGrid[i][j] = -1;
        }
    }

    for (int i = 0; i < userRows; i++)
    {
        char colConvertChar = (char)(i + 65);
        printf("%c ", colConvertChar);
        // printf("%d ", i + 1);
        for (int j = 0; j < userCol; j++)
        {
            if (ticTacGrid[i][j] == 0)
            {
                printf("O ");
            }
            else if (ticTacGrid[i][j] == 1)
            {
                printf("X ");
            }
            else
            {
                printf("_ ");
            }
        }
        printf("\n");
    }
    printf("userRows: %d , userCol: %d\n", userRows, userCol);
}