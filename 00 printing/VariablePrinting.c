#include <stdio.h>

int main()
{
    char myFavoriteNumber = 69;               // (%c) // inbetween 0 and 255 (8 bits) nice.
    char *myFavoritePerson = "Michael moore"; // (%s)
    printf("My favorite number: %d\n %s\n", myFavoriteNumber, myFavoritePerson);

    // changing the number for a different result
    myFavoriteNumber = 70;
    printf("My favorite number: %d\n", myFavoriteNumber);

    // ending the program with a success
    return 0;
}