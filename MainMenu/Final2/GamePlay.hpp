#pragma once

#include <memory>
#include "Game.hpp"
#include "State.hpp"

class GamePlay : public Engine::State
{
private:
	std::shared_ptr<Context> m_context;

public:
	GamePlay(std::shared_ptr<Context> m_context);
	~GamePlay();

	void Init() override;
	void ProcessInput() override;
	void Update(sf::Time deltaTime) override;
	void Draw() override;
	void Pause() override;
	void Start() override;
};

