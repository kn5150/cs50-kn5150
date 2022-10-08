#include <cs50.h>
#include <stdio.h>

int get_height(void);
void print_pyramid(int size);

int main(void) {

    int n = get_height();

    print_pyramid(n);
}


int get_height(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1 || n > 8);
    return n;
}

void print_pyramid(int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int space = height-1; space > i; space--)
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
