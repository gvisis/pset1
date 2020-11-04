#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, hashtag;

    do
    {
        //Prompt for the height of the pyramid
        height = get_int("Set the height of the pyramid: ");
    }
    //do this while conditions below
    while (height < 1 || height > 8);

    //nested loops 1st to print row
    for (int line = 0; line < height; line++)
    {
        //loop to print empty space before 1 pyramid
        for (int space = height - line; space > 1; space--)
        {
            printf(" ");
        }
        //loop to print hashtag
        for (hashtag = 0; hashtag < line + 1; hashtag++)
        {
            printf("#");
        }
        //prints a gap between pyramids
        printf("  ");
        //prints other side of the pyramid for mario to jump down
        for (int hash2 = 0; hash2 < line + 1; hash2++)
        {
            printf("#");
        }
        printf("\n");
      
    }
}
