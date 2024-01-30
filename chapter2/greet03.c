#include<stdio.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    time_t now;
    struct  tm *clock;
    time(&now);
    clock = localtime(&now);

    printf("Good ");
    int hour;
    hour = clock -> tm_hour;
    if (hour < 12)
        printf("morning");
    else if (hour < 17)
        printf("afternoon");
    else
        printf("evening");

    if(argc > 1)
        printf(", %s.", argv[1]);
    putchar('\n');
    return 0;
  
}
