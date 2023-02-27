#include <stdio.h>
#include <stdlib.h>



int main()
 {
    int i, k;

    for (i = 1; i <= 26; i++)
        {

            for (k = 1; k<= i; k++)
         {
            printf("%c ", 'A' + k - 1);
         }
        printf("\n");
        }




    return 0;
 }
