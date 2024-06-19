#include"SFML/Graphics.hpp"
int main()
{

    // Define the video mode (dimensions)
    sf::VideoMode videoMode = sf::VideoMode(1200, 720);

    // Create a window object with specific dimensions and a title
    sf::RenderWindow window(videoMode, "SFML Window");
    int i = 1;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Check for window closure
            if (event.type == sf::Event::Closed)
                window.close();
        }


        // Clear the window
        window.clear(sf::Color::Magenta);
        sf::CircleShape circle(50); // Radius 50
        circle.setFillColor(sf::Color::Red);
        circle.setPosition(400+i, 300); // Set position
        window.draw(circle);
            
        

        //window.clear(sf::Color::Green);
        sf::RectangleShape rect(sf::Vector2f(300, 70));
        rect.setOutlineColor(sf::Color::Black);
        rect.setPosition(800, 600-i);
        window.draw(rect);
        i += 1;


        sf::Texture outscal_texture;
        outscal_texture.loadFromFile("assets/textures/outscal_logo.png");

        sf::Sprite outscal_sprite;
        outscal_sprite.setTexture(outscal_texture);

        outscal_sprite.setPosition(350, 400); // Position
        outscal_sprite.setRotation(45+i); // Rotation in degrees
        outscal_sprite.setScale(0.5, 0.5); // Scale factor

        window.draw(outscal_sprite);





        // Display whatever you draw
        window.display();
    }




    return 0;
}