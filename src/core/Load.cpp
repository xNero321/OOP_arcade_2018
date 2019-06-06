/*
** EPITECH PROJECT, 2018
** Module
** File description:
** project + description
*/
#include "Load.hpp"

Load::Load()
{

}

Load::~Load()
{

}

void *Load::changeLib(const std::string &lib)
{
    void *libs = dlopen(libs.c_str(), RTLD_NOW | RTLD_LAZY);

    if (!libs) {
        std::cerr << dlerror() << std::endl;
        throw std::exception();
    }
    return (libs);
}

void Load::closeLib(void *lib)
{
    if (dlclose(lib) != 0)
        std::cerr << dlerror() << std::endl;
}
