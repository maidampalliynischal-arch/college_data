#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char x[50];
    while (1)
    {
        scanf("%%49s", x);
        if (strcmp(x, "exit") == 0)
        {
            break;
        }
        else{
            printf("Starters & Tandoori• Chicken 65• Chicken Tikka• Tandoori Chicken• Guntur Chilli Chicken• Malai Paneer Tikka");
        }


    }
    return 0;
}