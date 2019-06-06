/*
** EPITECH PROJECT, 2017
** Module
** File description:
** project + description
*/

#ifndef __NIBLER_HPP
#define __NIBLER_HPP

#include "AGame.hpp"
#include "AGraph.hpp"

class Nibler : public Arcade::AGame {
    public:
        Nibbler();
        ~Nibbler();
        void setCharacterPos(std::vector<std::vector<int>> character) {_snake = character};
        void setBox(std::vector<int> pos) {(void)pos;};
        void setObject(std::vector<int> obj) {(void)obj;};
        std::vector<std::vector<int>> getCharacter()  {return _snake;};
        void setMap(const std::string path);
        std::map<int, std::vector<int>> &getMap() {return (_map);};
        int getScore() const {return (_score);};
        void updateGame(Arcade::Event event);
        bool gameOver() const {return (_gameOver);};
        void resetGame();
        std::string getName() const {return "Nibbler";};
    private:
        bool _gameOver;
        std::vector<std::vector<int>> _snake;
        int _direction;
        std::map<int, std::vector<int>> _map;
        int _score;
        const std::vector<int> _pos;
        std::vecotr<std::vector<int>> cells;
};

#endif /* __NIBLER_HPP */
