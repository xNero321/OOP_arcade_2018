__attribute__((constructor))
void init_kek(void)
{
    printf("lul lmao\n");
}

__attribute__((destructor))
void destroy_kek(void)
{
    printf("lul rofl\n");
}

void entryPoint(void)
{
    printf("AYY LMAO\n");
}