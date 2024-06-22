

#include"SFML/Graphics.hpp"
#include"Headers/Player.hpp"
int main()
{
    sf::VideoMode videoMode = sf::VideoMode(1080, 1920);
    sf::RenderWindow window(videoMode, "SFML Window");

    Player player;

    player.player_texture.loadFromFile("assets/textures/player_ship.png"); // Load the player ship texture

    player.player_sprite.setTexture(player.player_texture);  // Set the player sprite variable 

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        }


        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            player.move();

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            player.move();

        window.clear(sf::Color::White);
        player.player_sprite.setposition(player.getpostion());

        window.draw(player.player_sprite);

        window.display();


    }

    return 0;
}