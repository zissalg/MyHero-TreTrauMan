#include "Unit.h"
#include "Window.h"
#include "Grid.h"

Window window;
Grid grid(&window);
Unit unit(&window);

int main()
{
    unit.setTexture("textures/grass.png");

    while(window.isOpen())
    {
        window.begin();

        window.draw(&unit);
        //window.draw(&grid);

        window.end();
    }
    return 0;
}
