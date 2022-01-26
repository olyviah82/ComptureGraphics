#include "SFML-2.5.1\include\SFML\Graphics.hpp"
#define         SPRITE_SPEED        1
#define _USE_MATH_DEFINES
#include <cmath> 

sf::Vector2f viewSize(1030, 890);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "Hello Kira: 5", sf::Style::Default);
sf::Texture bkgTexture;
sf::Sprite bkgSprite;
sf::Texture heroTexture;
sf::Sprite heroSprite;
// Sprite speed (high values = high speed)

// Flags for key pressed
bool upFlag = false;
bool downFlag = false;
bool leftFlag = false;
bool rightFlag = false;
//
 // Sprite coordinates
int x = window.getSize().x / 2.;
int y = window.getSize().y / 2.;


void init()
{
	bkgTexture.loadFromFile("Assets/Graphics/background5.png");
	bkgSprite.setTexture(bkgTexture);
	heroTexture.loadFromFile("Assets/Graphics/Animations/monkey_idle.png");
	heroSprite.setTexture(heroTexture);
	heroSprite.setPosition(sf::Vector2f(viewSize.x / 1.8, viewSize.y / 1.8));
	heroSprite.setOrigin(heroTexture.getSize().x / 2, heroTexture.getSize().y / 2);
//
	
}

void draw() {
	window.draw(bkgSprite);
	window.draw(heroSprite);
}

int main() {
	init();
	sf::Clock timer;
	while (window.isOpen()) {
		// Process events
		sf::Event event;

		window.clear(sf::Color::White);
		draw();

		window.display();

		//
		while (window.pollEvent(event))
		{
			// Close the window if a key is pressed or if requested
			if (event.type == sf::Event::Closed) window.close();

			// If a key is pressed
			if (event.type == sf::Event::KeyPressed)
			{
				switch (event.key.code)
				{
					// If escape is pressed, close the application
				case  sf::Keyboard::Escape: window.close(); break;

					// Process the up, down, left and right keys
				case sf::Keyboard::Up:     upFlag = true; break;
				case sf::Keyboard::Down:    downFlag = true; break;
				case sf::Keyboard::Left:    leftFlag = true; break;
				case sf::Keyboard::Right:   rightFlag = true; break;
				default: break;
				}
			}
			// If a key is released
			if (event.type == sf::Event::KeyReleased)
			{
				switch (event.key.code)
				{
					// Process the up, down, left and right keys
				case sf::Keyboard::Up:     upFlag = false; break;
				case sf::Keyboard::Down:    downFlag = false; break;
				case sf::Keyboard::Left:    leftFlag = false; break;
				case sf::Keyboard::Right:   rightFlag = false; break;
				default: break;
				}
			}
		}
		// Update coordinates
		if (leftFlag) x -= SPRITE_SPEED;
		if (rightFlag) x += SPRITE_SPEED;
		if (upFlag) y -= SPRITE_SPEED;
		if (downFlag) y += SPRITE_SPEED;

		// Check screen boundaries
		if (x < 0) x = 0;
		if (x > (int)window.getSize().x) x = window.getSize().x;
		if (y < 0) y = 0;
		if (y > (int)window.getSize().y) y = window.getSize().y;
		// Rotate and draw the sprite
		heroSprite.setPosition(x, y);
		//heroSprite.setRotation(timer.getElapsedTime().asSeconds() / 3.141592 * 90.f);
		window.draw(heroSprite);
		//
		

	}
	//animation movement 

	
	return 0;
}