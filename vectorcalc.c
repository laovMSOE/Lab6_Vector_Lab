
#include <stdio.h>
#include <string.h>
#include "vectorcalc.h"

int main(void)
{
    char user_input[20];
    char *q = "QUIT";
    char *token1;
    char *token2;
    char *token3;
    char *token4;
    char *token5;

    bool quit = false;

    while(quit == false)
    {
        printf("MyVector> ");
        fgets(user_input, 20, stdin);
        token1 = strtok(user_input, " ");
        if(strcmp(token1, q) == 0)
        {
            printf("equal");
            quit = true;
        }
        else 
        {
            printf("%s", token1);
        }
    }
    return 0;
}