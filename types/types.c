
#include <stdio.h>

int main()
{

    char x = 5, y = -2, z = -11;
    int w[8];

    w[0] = x;
    w[1] = y;
    w[2] = z;
    w[3] = x + y;
    w[4] = y + z;
    w[5] = x + y + z;

    printf("w[5]: %d", w[5]);
    printf("\n");

    return 0;
}