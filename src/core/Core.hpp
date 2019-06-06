/*
** EPITECH PROJECT, 2017
** Module
** File description:
** Core.hpp
*/

#ifndef __CORE__HPP
#define __CORE__HPP
#include <iostream>
#include <algorith>
#include <dirent.h>
#include <string>
#include "AGraph.hpp"
#include "AGame.hpp"
#include "Menu.hpp"
#include "Load.hpp"

namespace Arcade {
    class Core {
        public:
            Core(const std::stirng &lib);
            ~Core();
            void iMLoop();
            void iMenuLoop();
            void iGameLoop();
            void switchGame(int index);
            void switchLib(int index);
            void lGraphical();
            void lGame();
            void lookEvent();
            std::vector<std::string> getGame() const;
            std::vector<std::string> getLib() const;
        private:
            std::vector<void *> _acLib;
            std::vector<std:shared_ptr<AGame>> _game;
            std::vector<std::shared_ptr><AGraph> _graph;
            Load _load;
            std::stirng _playerName;
            size_t _acGraph;
            Menu _menu;
            int _app;
            int _CounterMenu;
            int _menu2;
            size_t _acGame;
            Aracade::Event _event;
    };
}
#endif /* __CORE__HPP */
