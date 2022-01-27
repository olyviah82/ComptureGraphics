#include "SFML-2.5.1\include\SFML\Graphics.hpp"

sf::Vector2f viewSize(1030, 890);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "Hello Kira", sf::Style::Default);
sf::Texture bkgTexture;
sf::Sprite bkgSprite;
sf::Sprite imageofKira;
sf::Vector2f playerPosition;
sf::Texture arrayOfTexture[13];
bool playerMovingRight = false;
bool playerMovingLeft = false;
bool playerMovingUp = false;
int currentFrame = 1;
float duration = float();




void init()
{
	bkgTexture.loadFromFile("Assets/Graphics/background5.png");
	bkgSprite.setTexture(bkgTexture);

	
	arrayOfTexture[0].loadFromFile("Assets/Graphics/Animations/monkey_idle.png");
	arrayOfTexture[1].loadFromFile("Assets/Graphics/Animations/monkey_run_1.png");
	arrayOfTexture[2].loadFromFile("Assets/Graphics/Animations/monkey_run_2.png");
	arrayOfTexture[3].loadFromFile("Assets/Graphics/Animations/monkey_run_3.png");
	arrayOfTexture[4].loadFromFile("Assets/Graphics/Animations/monkey_run_4.png");
	arrayOfTexture[5].loadFromFile("Assets/Graphics/Animations/monkey_run_5.png");
	arrayOfTexture[6].loadFromFile("Assets/Graphics/Animations/monkey_run_6.png");
	arrayOfTexture[7].loadFromFile("Assets/Graphics/Animations/monkey_run_7.png");
	arrayOfTexture[8].loadFromFile("Assets/Graphics/Animations/monkey_run_8.png");
	arrayOfTexture[9].loadFromFile("Assets/Graphics/Animations/monkey_jump_1.png");
	arrayOfTexture[10].loadFromFile("Assets/Graphics/Animations/monkey_jump_2.png");
	arrayOfTexture[11].loadFromFile("Assets/Graphics/Animations/monkey_jump_3.png");
	arrayOfTexture[12].loadFromFile("Assets/Graphics/Animations/monkey_jump_4.png");

	
	imageofKira.setTexture(arrayOfTexture[0]);
	imageofKira.setPosition(sf::Vector2f(viewSize.x / 1.8, viewSize.y / 1.8));
	imageofKira.setOrigin(arrayOfTexture[0].getSize().x / 2, arrayOfTexture[0].getSize().y / 2);
}


void draw() {
	window.draw(bkgSprite);
	window.draw(imageofKira);
}

void updateInput() {

	sf::Event event;

	while (window.pollEvent(event)) {

		if (event.type == sf::Event::KeyPressed) {
			
			if (event.key.code == sf::Keyboard::Right) {
				playerMovingRight = true;
			}
			if (event.key.code == sf::Keyboard::Left) {
				playerMovingLeft = true;
			}
			if (event.key.code == sf::Keyboard::Up) {
				playerMovingUp = true;
			}
		}
		if (event.type == sf::Event::KeyReleased) {

			if (event.key.code == sf::Keyboard::Right) {
				playerMovingRight = false;
			}
			if (event.key.code == sf::Keyboard::Left) {
				playerMovingLeft = false;
			}
			if (event.key.code == sf::Keyboard::Up) {
				playerMovingUp = false;
			}
		}
		if (event.key.code == sf::Keyboard::Escape || event.type == sf::Event::Closed) {
			window.close();
		}

		
	
	}
}

void update(sf::Time deltaTime) {

	sf::Vector2f movement(0.0f, 0.0f);
	if (playerMovingRight) {
		movement.x += 50.f;
	}
	if (playerMovingLeft) {
		movement.x -= 50.f;
	}
	if (playerMovingUp) {
		movement.y -= 50.f;
	}

	imageofKira.move(movement * deltaTime.asSeconds());
}

int main() {

	sf::Clock clock;

	
	init();

	while (window.isOpen()) {

		sf::Time deltaTime = clock.restart();
		duration += deltaTime.asSeconds();

		update(deltaTime);
		
		updateInput();

		

		if (duration > 0.1f)
		{
			if (currentFrame < 8 && playerMovingRight) {
				currentFrame += 1;
			}
			else if (currentFrame > 8 && playerMovingRight) {
				currentFrame = 0;
			}
			else if (currentFrame < 8 && playerMovingLeft) {
				currentFrame += 1;
			}
			else if (currentFrame > 8 && playerMovingLeft) {
				currentFrame = 0;
			}
			else if (currentFrame < 9 && playerMovingUp) {
				currentFrame += 1;
			}
			else if (currentFrame < 9 && playerMovingUp) {
				currentFrame = 0;
			}
			else {
				currentFrame = 0;
			}
			imageofKira.setTexture(arrayOfTexture[currentFrame]);
		}

		window.clear(sf::Color::White);
		draw();
		window.display();

	}
	
	return 0;
}