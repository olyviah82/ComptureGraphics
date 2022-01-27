#include "Graphics.hpp"
using namespace sf;


Vector2f viewSize(1024, 768);
VideoMode vm(viewSize.x, viewSize.y);
RenderWindow window(vm, "Welcome to Excolo!",
	Style::Default);

Texture bgTexture;
Sprite bgSprite;
Texture logoTexture;
Sprite logoSprite;
Font comicsansmsgras;
Font comicsansms;
Font arial;
Text welcome("Welcome to Excolo", comicsansmsgras, 50);
Text creators("Presented by:\n\n"
	"121455 Amwoma Olyviah\n"
	"120174 Cynthia Gichuki\n"
	"115384 Moses Kinoti\n"
	"100226 Gami Raj Govind", arial, 18);
RectangleShape creatorsboard;
Texture playButtonTexture;
Sprite playButtonSprite;
Texture englishModeTexture;
Sprite englishModeSprite;
Texture mathModeTexture;
Sprite mathModeSprite;
Text chooseMode("Choose Your Mode:\n""    Press A or 1", comicsansms, 50);
Event event;

void init() {

	bgTexture.loadFromFile("Assets/graphics/bg1.jpg");
	bgSprite.setTexture(bgTexture);
	
	comicsansmsgras.loadFromFile("Assets/fonts/comicsansmsgras.ttf");
	welcome.setPosition(285, 310);
	welcome.setFillColor(Color::Color(9,121,105,255));
	
	logoTexture.loadFromFile("Assets/graphics/logo.png");
	logoSprite.setTexture(logoTexture);
	logoSprite.setPosition(454.5, 146.5);
	logoSprite.setScale(Vector2f::Vector2(0.75, 0.75));

	arial.loadFromFile("Assets/fonts/arial.ttf");
	creators.setPosition(15, 620);
	creators.setFillColor(Color::White);
	creators.setStyle(Text::Bold);
	creatorsboard.setSize(Vector2f(250, 150));
	creatorsboard.setFillColor(Color::Color(9, 121, 105, 255));
	creatorsboard.setOutlineColor(Color::White);
	creatorsboard.setOutlineThickness(3);
	creatorsboard.setPosition(5, 615);

	playButtonTexture.loadFromFile("Assets/graphics/play.png");
	playButtonSprite.setTexture(playButtonTexture);
	playButtonSprite.setPosition(412, 384);

	englishModeTexture.loadFromFile("Assets/graphics/EnglishMode.png");
	englishModeSprite.setTexture(englishModeTexture);
	englishModeSprite.setPosition(220, 420);

	mathModeTexture.loadFromFile("Assets/graphics/MathMode.png");
	mathModeSprite.setTexture(mathModeTexture);
	mathModeSprite.setPosition(600, 420);
	mathModeSprite.setScale(0.9, 0.9);

	comicsansms.loadFromFile("Assets/fonts/comicsansms.ttf");
	chooseMode.setPosition(300, 220);
	chooseMode.setFillColor(Color::Color(9, 121, 105, 255));
	
	
}

void draw() {

	window.draw(bgSprite);
	window.draw(welcome);
	window.draw(logoSprite);
	window.draw(creatorsboard);
	window.draw(creators);
	window.draw(playButtonSprite);
}

void draw2() {
	window.draw(bgSprite);
	window.draw(chooseMode);
	window.draw(creatorsboard);
	window.draw(creators);
	window.draw(englishModeSprite);
	window.draw(mathModeSprite);

}

int main() {
	//Initialize Game Objects
	init();
	
	while (window.isOpen()) {

		//Handle Keyboard Events
		if (Keyboard::isKeyPressed(Keyboard::Enter)) {

			while (window.isOpen()) {
				while (window.pollEvent(event)) {

					if (event.type == Event::Closed)
						window.close();


				}
				window.clear();
				draw2();
				window.display();
			}
			

		}
		//Update Game Objects in the scene
		while (window.pollEvent(event)) {

			if (event.type == Event::Closed)
				window.close();


		}
		window.clear();
		draw();

		//Render Game Objects
		window.display();

		
	}
	return 0;
}
	
	
