#include "main.h" //includes function prototypes in main.h file
#include <stdlib.h> //includes standard library functions
#include <stdio.h> //includes functions for standard IO
#include <string.h> //includes string functions
#include <unistd.h> //includes functions for sleep
#include <windows.h>
/*
main: initialise calculator
returns: o || 1 , success or not
*/
int main(void)  {
    //intro functions
    artDisplay();
    printIntro();
    mathsFunction();
    return (0);
}