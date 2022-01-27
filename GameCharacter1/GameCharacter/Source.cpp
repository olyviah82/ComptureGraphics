#include "SFML-2.5.1\include\SFML\Graphics.hpp"

sf::Vector2f viewSize(1030, 890);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "Hello Kira: 5", sf::Style::Default);
sf::Texture bkgTexture;
sf::Sprite bkgSprite;
sf::Texture heroTexture;
sf::Sprite heroSprite;

void init()
{
	bkgTexture.loadFromFile("Assets/Graphics/background5.png");
	bkgSprite.setTexture(bkgTexture);
	heroTexture.loadFromFile("Assets/Graphics/Animations/monkey_idle.png");
	heroSprite.setTexture(heroTexture);
	heroSprite.setPosition(sf::Vector2f(viewSize.x / 1.8, viewSize.y / 1.8));
	heroSprite.setOrigin(heroTexture.getSize().x / 2, heroTexture.getSize().y / 2);
}

void draw() {
	window.draw(bkgSprite);
	window.draw(heroSprite);
}

int main() {
	init();

	while (window.isOpen()) {

		window.clear(sf::Color::White);
		draw();

		window.display();

	}
	
	return 0;
}