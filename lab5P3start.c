#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char input[256];
    int letterCount[26] = {0}; // Array to store the count of each letter 

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); //user input 

        // for empty line to exit the loop
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }


        for (int i = 0; input[i] != '\0'; i++)
        {
            if (isalpha(input[i])) 
            {
                char c = tolower(input[i]); // convert to lowercase
                int index = c - 'a'; 
                letterCount[index]++; 
            }
        }
    }

    // letter counts
    for (int i = 0; i < 26; i++)
    {
        printf("%c: %d\n", 'a' + i, letterCount[i]);
    }

    return 0;
}
