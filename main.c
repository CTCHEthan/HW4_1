#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 0;

    do
    {
        if (x % 2 == 0)
        {
            printf("%d\n", x);
        }
       x = x + 1;
    }
    while (x <= 100);



    return 0;
}
