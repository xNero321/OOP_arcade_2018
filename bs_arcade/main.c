#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>

int main(void)
{
    void *handle;
    void (*func_entryPoint)(void);
    char tab[3][15] = {"./libkek.so", "./liblul.so", "./libzez.so"};
    
    for (int i = 0; i < 3; i++) {
        handle = dlopen(tab[i], RTLD_LAZY);
        *(void**)(&func_entryPoint) = dlsym(handle, "entryPoint");
        func_entryPoint();
        dlclose(handle);
    }
}