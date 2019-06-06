/*
** EPITECH PROJECT, 2017
** Module
** File description:
** project + description
*/

#ifndef __AGAME_HPP
#define __AGAME_HPP

#include <ctime>
#include <map>
#include <iostream>
#include <unistd.h>
#include <fstream>
#include <vector>
#include "Misc.hpp"

namespace Arcade {
    class IGame {
    public:
        virtual ~IGame() = default;
        virtual void setCharacterPos(std::vector<std::vector<int>> character) = 0;
        virtual void setMap(const std::string path) = 0;
        virtual std::vector<std::vector<int>> getCharacter() = 0;
        virtual std::map<int, std::vector<int>> &getMap() = 0;
        virtual int getScore() const = 0;
        virtual void updateGame(Arcade::Event event) = 0;
        virtual bool gameOver() const = 0;
        virtual void resetGame() = 0;
        virtual std::string getName() const = 0;
    };
}
#endif /* __AGAME_HPP */
