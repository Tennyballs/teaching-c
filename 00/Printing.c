/*
    #include keyword starts with a hashtag because
    the linker (the glue that glues code together to make it work)
    usually looks for these to combine code or references together
*/
#include <stdio.h> // this is an in/out file that lets you communicate between stdin (input) and stdout (output)
int main()
{
    printf("Hello World!\n"); // "\n" means new line
}