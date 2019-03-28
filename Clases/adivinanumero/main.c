#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rand(void);

int main()
{
    printf("Hello world!\n");
    return 0;
}

int rand(void)
{
    srand(time(NULL));
    int random = rand();
    printf("el random es %d",random);
}
