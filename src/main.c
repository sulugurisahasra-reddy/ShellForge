#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT 1024

int main(void)
{
    char input[MAX_INPUT];

    while (1)
    {
        printf("ShellForge$ ");
        fflush(stdout);

        if (fgets(input, MAX_INPUT, stdin) == NULL)
        {
            break;
        }

        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "exit") == 0)
        {
            break;
        }

        if (strlen(input) == 0)
        {
            continue;
        }

        system(input);
    }

    printf("Exiting ShellForge...\n");

    return 0;
}
