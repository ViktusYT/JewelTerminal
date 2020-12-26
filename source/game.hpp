#ifndef GAME_HPP
#define GAME_HPP

#include "pch.hpp"
#include "board.hpp"
#include "engine.hpp"

class Game
{
private: 

    sf::VideoMode videoMode;
    sf::RenderWindow* window;
    sf::Event ev;

    //Init functions
    void initVariables();
    void initWindow();
    void initSettings();
    void initObjects();

    void pollEvents();
    void updateMousePositions();

    //Objects
    std::vector <Layer*> layers;
    std::vector <Jewel*> jewels;

    ///Mouse Positions
    sf::Vector2i mousePositionWindow;
    sf::Vector2f mousePositionView;

    //Settings
    sf::Vector2f jewelSize;

    //Selected
    Object* selected;

public:

    Game();
    ~Game();

    //Getters
    const bool running() const;

    //Functions
    void update();
    void render();
};

#endif /*GAME_HPP*/