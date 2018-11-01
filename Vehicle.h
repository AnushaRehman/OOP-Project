#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include "Vehicle.h"

class Vehicle
{
private:
    SDL_Rect mover;
    SDL_Texture* image;
public:
    Vehicle();
    virtual ~Vehicle();
    virtual void Draw() = 0;
};
