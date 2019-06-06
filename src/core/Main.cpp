/*
** EPITECH PROJECT, 2017
** OOP_arcade_2018
** File description:
** Main.cpp
*/
#include "Core.hpp"

static void usage()
{
    std::cout << "Noob !" << std::endl;
    exit(84);
}

int main(int ac, char **av)
{
    if (ac != 2)
        usage();
    try {
        Arcade::Core core(av[1]);
        core.iMloop();
    }
    catch(std::exception &e) {
        e.what();
        return (84);
    }
    return (0);
}
