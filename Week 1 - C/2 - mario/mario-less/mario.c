#include <cs50.h>
#include <stdio.h>

int get_height(void);
void print_pyramid(int size);

int main(void)
{
    // Get height
    int n = get_height();

    // Print pyramid
    print_pyramid(n);
}

// User input for pyramid height from 1-8
int get_height(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    return n;
}

// Print right-aligned pyramid
void print_pyramid(int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int space = height - 1; space > i; space--)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
