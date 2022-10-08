#include <cs50.h>
#include <stdio.h>

int get_height(void);
void print_pyramid(int size);

int main(void)
{
    // User input for pyramid height from 1-8
    int n = get_height();

    // Print pyramid
    print_pyramid(n);
}

// Abstraction for height
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

// Abstraction for printing pyramid
void print_pyramid(int height)
{
    // Process height value
    for (int i = 0; i < height; i++)
    {
        //Align pyramid rightward
        for (int space = height - 1; space > i; space--)
        {
            printf(" ");
        }

        // Print pyramid
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        // Print new line
        printf("\n");
    }
}
