#include <SFML/Graphics.hpp>

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
    window.setFramerateLimit(144);
    sf::CircleShape shape(200.f);
    shape.setPosition(sf::Vector2f(700, 175));
    shape.setFillColor(sf::Color::Green);


    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }
        window.draw(shape);
        window.display();

    }
}
//google smfl documentaion for green circle