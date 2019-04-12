__attribute__((constructor))
void init_kek(void)
{
    printf("zez: mozambique here\n");
}

__attribute__((destructor))
void destroy_kek(void)
{
    printf("zez ded\n");
}

void entryPoint(void)
{
    printf("zezouille\n");
}