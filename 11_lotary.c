#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int n, num, *ptr;
    char participants[50][50][50];

    printf("Enter the number of participants-->");
    scanf("%d", &num);
    srand(time(0));
    n = rand() % num;
    // printf("%d\n", n);
    ptr = &n;

    for (int i = 0; i < num; i++)
    {
        printf("Enter %d participant name-->", i + 1);
        scanf("%s", &participants[i]);
    }

    printf("The winner is ::->");
    printf("%s\n", participants[n]);

    return 0;
}