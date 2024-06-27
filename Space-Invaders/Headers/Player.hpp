#pragma once
class Player
{
    int health=10;
    sf::Vector2f position = sf::Vector2f(500.0f, 300.0f);
    int movement_speed = 5;
    int player_score = 0;
public:
    void move(float offsetX)
    {
        position.x += offsetX;
    }


    sf::Texture player_texture;
    sf::Sprite player_sprite;

    int getMoveSpeed()
    {
        return movement_speed;
    }

    sf::Vector2f getPosition()
    {
        return position;
    }
};
