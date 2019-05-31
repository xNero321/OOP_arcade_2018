#include <stdio.h>

__attribute__((constructor))
void init_kek(void)
{
    printf("kek loaded and ready to fire\n");
}

void entryPoint(void)
{
    printf("TOPKEK\n");
}

__attribute__((destructor))
void destroy_kek(void)
{
    printf("kek out\n");
}
