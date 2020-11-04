#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

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
        //loop to print empty space
        for (int space = height - line; space > 1; space--)
        {
            printf(" ");
        }
        //loop to print hashtag
        for (int hashtag = 0; hashtag < line + 1; hashtag++)
        {
            printf("#");
        }
        //prints/ goes to next line
        printf("\n");
   
    }
}
