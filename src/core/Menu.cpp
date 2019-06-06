/*
** EPITECH PROJECT, 2018
** OOP_arcade_2018
** File description:
** Menu
*/

#include "Menu.hpp"

Menu::Menu() : _name(), _score(), _games(), _block(0), _vlName(false)
{

}
Menu::~Menu()
{

}

void Menu::drawGameHUD(std::shared_ptr<Arcade::AGraph> lib, const std::string &name, int score)
{
    lib->drawObject(name, lib->getPosMenu("posTitle"));
    lib->drawText(lib->getPosMenu("posTitleScore"), 40, "Score");
    lib->drawBow(lib->getPosMenu("posBoxScore"), lib->getPosMenu("sizeBoxScore"));
    lib->drawText(lib->getPosMenu("posScore"), 20, std::to_string(score), "yellow");
}

void Menu::playerName(std::shared_ptr<Arcade::AGraph> lib)
{
    lib->drawText(lib->getPosMenu("posQuestion"), 30, "PLEASE ENTER YOUR NAME");
    lib->drawBox(lib->getPosMenu("posBoxName"), lib->getPosMenu("sizeBoxName"));
    _name = lib->getString(lib->getPosMenu("posName"));
    if (_name != "")
        vlName = true;
}

void Menu::displayMenu(std::shared<Arcade::AGraph> lib)
{
    int i = 0;
    lib->drawBox(lib->getPosMenu("posBoxGame"), lib->getPosMenu("sizeBoxGame");
    for (int y = 0; y < (int)_games.size(); y++) {
        if (y != block)
            lib->drawText({lib->getPosMenu("posGame")[0] + y, lib->getPosMenu("posGame")[1]}, 20, _games[y], "selected");
    i = i + 4;
    }
    lib->drawText(lib->getPosMenu("posExit"), 30, "EXIT");
    // if (block < (int)_game.size()) {
    //     lib->drawText(lib->getPosMenu("posExit"), 30, "EXIT", "selected");
    //     lib->drawText({lib->getPosMenu("posGame")[0] + 4 * block, lib->getPosMenu("posGame")[1]}, 20, _games[block]);
    // } else if {
    //     lib->drawText()
    //}
}

void Menu::update(Arcade::Event event)
{
    if (event == Arcade::KEYUP)
        block -= block != 0 && block != (int)_games.size() + 1 ? 1 : 0;
    if (event == Arcade::KEYDOWN)
        block += block != (int)_games.size() ? 1 : 0;
    if (event == Arcade::ENTER) {
        if (block == (int)_games.size())
            return (-1);
        else
            return (block + 1);
    }
    return (0);
}
