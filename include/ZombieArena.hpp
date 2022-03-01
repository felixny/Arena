#pragma once
#include "Zombie.hpp"
#include <SFML/Graphics.hpp>
using namespace sf;
int createBackground(VertexArray& rVA, IntRect arena);
Zombie* createHorde(int numZombies, IntRect arena);


