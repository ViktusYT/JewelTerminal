#ifndef ENGINE_HPP
#define ENGINE_HPP

#include "pch.hpp"
#include "layer.hpp"

class Engine
{
private:

    Engine() {}

public:

    static void draw(std::vector<Layer*> &layers, sf::RenderWindow* window);
    static void addObject(std::vector<Layer*> &layers, bool topPririty, Object* newObject);
    static void addObject(std::vector<Layer*> &layers, unsigned layer, Object* newObject);
    static void addTopLayer(std::vector<Layer*> &layers);
    //static void addToTheSameLayerAs(std::vector<Layer*>* layers, Object* newObject, Object* existingObject); 

    static void moveTo(Object* object, sf::Vector2f position);

    static Object* giveSelectable(std::vector<Layer*> &layers, sf::Vector2f mousePos);
    static void deleteUnnecessary(std::vector<Layer*> &layers);
};

#endif /*ENGINE_HPP*/