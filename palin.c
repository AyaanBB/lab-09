#include <stdio.h>
#include <string.h>

int main() {
    char Words[5][20]; 
    int i, j, len, pal;

    
    printf("Enter 5 words:\n");
    for (i = 0; i < 5; i++) 
    {
        scanf("%s", Words[i]);
    }


    for (i = 0; i < 5; i++) 
    {
        len = strlen(Words[i]);
        pal = 1; 

        for (j = 0; j < len / 2; j++) {
            if (Words[i][j] != Words[i][len - j - 1]) {
                pal = 0;
                break;
            }
    }

        if (pal == 1) 
        {
            printf("Word '%s' is a palindrome.\n", Words[i]);
        } else 
        {
            printf("Word '%s' is not a palindrome.\n", Words[i]);
        }
    }

    return 0;
}
