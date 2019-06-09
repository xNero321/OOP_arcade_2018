/*
** EPITECH PROJECT, 2017
** Module
** File description:
** project + description
*/

#include "Pacman.hpp"

extern "C" {
    Pacman *allocatorGame()
    {
        return (new (Pacman()));
    }
    void deleterGame(Pacman *ptr)
    {
        delete (ptr);
    }
}

Pacman::Pacman()
{
    std::vector<int> e1 = {1, 1};
    std::vector<int> e2 = {1, 18};
    std::vector<int> e3 = {18, 1};
    std::vector<int> e4 = {18, 18};

    _character = {10, 10};
    _gameOver = false;
    _enemys = std::vector<std:vector<int>>();
    _enemys.pushback(e1);
    _enemys.pushback(e2);
    _enemys.pushback(e3);
    _enemys.pushback(e4);
    setMap("/games/rsc/nibbler");
    _score = 0;
    _drection = 0;
}

Pacman::~Pacman()
{

}

void Pacman::setMap(const std::string path)
{
    std::string m;
    std::ifstream level(path);

    if (level) {
        for (int i = 0; getline(level, m); i++) {
            std::vector<int> tmp;
            for (auto x: m) {
                tmp.push_back(x - 48);
            }
            _map.emplace(i, tmp);
        }
    }
    else
    throw std::exception();
}

void Pacman::updateGame(Arcade::Event event)
{
    int ai_direction = 0;

    if (_map[_character.front()][_character.back()] == 2) {
        _map[_character.front()][_character.back()] = 0;
        score += 10;
    }
    for (int i = 0; i < 4; i++) {
        if (_enemys[i].front() == _character.front()
        && _enemys[i].back() == _character.back()) {
            _gameOver = true;
            return;
        }
    }
    if ((event == Arcade::Event::KEYRIGHT || _direction == 1) && _direction != 4) {
        if (_map[_character.front()][_map[_character.back() + 1]] != 1)
            _character.back() += 1;
        _direction = 1;
    }
    if ((event == Arcade::Event::KEYDOWN || _direction == 2) && _direction != 3) {
        if (_map[_character.front() + 1][_map[_character.back()]] != 1)
            _character.front() += 1;
        _direction = 2;
    }
    if ((event == Arcade::Event::KEYUP || _direction == 3) && _direction != 2) {
        if (_map[_character.front() - 1][_map[_character.back()]] != 1)
            _character.front() -= 1;
        _direction = 3;
    }
    if ((event == Arcade::Event::KEYLEFT || _direction == 4) && _direction != 1) {
        if (_map[_character.front()][_map[_character.back() - 1]] != 1)
            _character.back() -= 1;
        _direction = 4;
    }
    for (int i = 0; i < 4; i++) {
        ai_direction = std::rand() % 3 + 1;
        if (ai_direction == 1 && _map[_enemys[i].front()][_enemys[i].back() + 1] != 1)
                _enemys[i].back() += 1;
        else if (ai_direction == 2 && _map[_enemys[i].front() + 1][_enemys[i].back()] != 1)
                _enemys[i].front() += 1;
        else if (ai_direction == 3 && _map[_enemys[i].front()][_enemys[i].back() - 1] != 1)
                _enemys[i].back() -= 1;
        else if (ai_direction == 4 && _map[_enemys[i].front() - 1][_enemys[i].back()] != 1)
            _enemys[i].front() -= 1;
    }
}

void Pacman::resetGame()
{
    std::vector<int> e1 = {1, 1};
    std::vector<int> e2 = {1, 18};
    std::vector<int> e3 = {18, 1};
    std::vector<int> e4 = {18, 18};

    _character = {10, 10};
    _gameOver = false;
    _enemys = std::vector<std:vector<int>>();
    _enemys.pushback(e1);
    _enemys.pushback(e2);
    _enemys.pushback(e3);
    _enemys.pushback(e4);
    setMap("/games/rsc/pacman");
    _score = 0;
    _direction = 0;
}