#include <cs50.h>
#include <stdio.h>
#include <math.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

// Abstraction for cents
int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 1);
    return cents;
}

// Abstraction for quarters
int calculate_quarters(cents)
{
    int quarters = floor(cents / 25);

    // Check if cents is greater than or equal to 25
    if (cents >= 25)
    {
        return quarters;
    }
    // Return nothing if condition not satisfied
    else
    {
        return 0;
    }

}

// Abstraction for dimes
int calculate_dimes(int cents)
{
    int dimes = floor(cents / 10);

    // Check if cents is greater than or equal to 10
    if (cents >= 10)
    {
        return dimes;
    }
    // Return nothing if condition not satisfied
    else
    {
        return 0;
    }
}

// Abstraction for nickels
int calculate_nickels(int cents)
{
    int nickels = floor(cents / 5);

    // Check if cents is greater than or equal to 5
    if (cents >= 5)
    {
        return nickels;
    }
    // Return nothing if condition not satisfied
    else
    {
        return 0;
    }
}

// Abstraction for pennies
int calculate_pennies(int cents)
{
    int pennies = floor(cents / 1);

    // Check if cents is greater than or equal to 1
    if (cents >= 1)
    {
        return pennies;
    }
    // Return nothing if condition not satisfied
    else
    {
        return 0;
    }
}
