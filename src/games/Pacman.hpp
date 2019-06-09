/*
** EPITECH PROJECT, 2017
** Module
** File description:
** project + description
*/

#ifndef PACMAN_HPP_
#define PACMAN_HPP_

#include "AGame.hpp"
#include "AGraph.hpp"

class Pacman : public Arcade::AGame {
    public:
        Pacman();
        ~Pacman();

        void setMap(const std::string path);
        void setBox(std::vector<int> pos) {(void)pos;};
        void setObject(std::vector<int> obj) {(void)obj;};

        int getScore() const {return (_score);};
        std::map<int, std::vector<int>> &getMap() {return (_map);};
        std::vector<int> getCharacter()  {return _character;};
        std::string getName() const {return ("Pacman");};


        void resetGame();
        void updateGame(Arcade::Event event);
        bool gameOver() const {return (_gameOver);};

    protected:
        std::vector<int> _character;
        std::vector<int, std::vector<int>> _enemys;
        bool _gameOver;
        std::map<int, std::vector<int>> _map;
        int _score;
        int _direction;
}
#endif /* PACMAN_HPP_ */