#include <stdio.h>
#include <windows.h>

int main ()
{
    int i;

    for (i = 100; i >= 1; i--)
    {
        printf("%d\n", i);

        fflush(stdout);

        Sleep(1000);
    }
}