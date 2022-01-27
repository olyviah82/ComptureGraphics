#include "Game.hpp"
#include "SFML-2.5.1\include\SFML\Graphics.hpp"
#include "SFML-2.5.1\include\SFML\Window\Event.hpp"
#include <iostream>
#include "MainMenu.hpp"

Game::Game() : m_context(std::make_shared<Context>())
{

	m_context->m_window->create(sf::VideoMode(580, 290), "The Excolo Game!", sf::Style::Default);
	m_context->m_states->Add(std::make_unique<MainMenu>(m_context));
}
Game::~Game() {

}

void Game::Run() {
	

	sf::Clock clock;
	sf::Time timeSinceLastFrame = sf::Time::Zero;

	
	sf::Texture bgtexture;
	bgtexture.loadFromFile("Assests/ graphics /forest.png");

	sf::Sprite bgSprite(bgtexture);

	
	while (m_context->m_window->isOpen()) {

		timeSinceLastFrame += clock.restart();

		while(timeSinceLastFrame > TIME_PER_FRAME)
		{

			timeSinceLastFrame -= TIME_PER_FRAME;

			
			m_context->m_states->ProcessStateChange();
			m_context->m_states->GetCurrent()->ProcessInput();
			m_context->m_states->GetCurrent()->Update(TIME_PER_FRAME);
			m_context->m_states->GetCurrent()->Draw();

			
			m_context->m_window->draw(bgSprite);
			

			


	}


	
	}

	

	
	
}
