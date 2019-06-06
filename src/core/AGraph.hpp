/*
** EPITECH PROJECT, 2017
** OOP_arcade_2018
** File description:
** AGraph.hpp
*/
#ifndef __AGRAPH__HPP_
#define __AGRAPH__HPP_
#include <map>
#include <list>
#include <sstream>
#include <iostream>
#include <fstream>
#include <unistd.h>
#include <vector>
#include <string>
#include "Misc.hpp"

namespace Arcade {
    class AGraph {
        public:
            virtual ~AGraph() = default;
            virtual void openWindow() = 0;
            virtual void closeWindow() = 0;
            virtual void drawCharacter(std::vector<std::vector<int>> character, std::vector<int> pos) = 0;
            virtual void drawBox(std::vector<int> pos, std::vector<int> size, int type = 0) = 0;
            virtual void updateWindow() = 0;
            virtual void drawObject(std::string name, std::vector<int> pos);
            virtual void drawText(std::vector<int> pos, int fontSize, std::string str, const std::string &color = "green") = 0;
            virtual Arcade::Event getEvent() = 0;
            virtual std::string getString(std::vector<int> pos) = 0;
            virtual void loadAsset(const std::string &name) = 0;
            virtual void drawMap(std::map<int, std::vector<int>> map, std::vector<int> pos) = 0;
            virtual std::string getName() const = 0;
            virtual std::vector<int> getPosMenu(std::string &id) = 0;
    };
}
#endif /* __AGRAPH__HPP_ */
