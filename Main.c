// (return / variable) types
// void -> 0/0

// short (int / 2) -> a shorter whole number
// int -> whole number
// long (int*2) -> longer whole number

// floats, doubles -> decimal (xxx.xxxxxx)

// char (character) -> 0 to 255 values (256 unique values) (8 bits) or one character like 'a' (SINGLE CHARACTER)
// char *variableName -> "My Name Is Michael Or something idk" (STRING / Array of characters)

// rules for the main function
// main function requires int at the start
// it is to declare it is a "variable" that returns a value, in this case (int)
// above 0 is error
// return = 0 is a success
int main()
{
    int a = add(1, 2); // Screams because add is not defined above the main function.

    return 0;
}

int add(int argumentA, int argumentB) // returnType functionName(arguments)
{
    int c = argumentA + argumentB;

    return c; // return an object with the type of returnType
}