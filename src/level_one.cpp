#include "level_one.hpp"

using namespace Azo;

LevelOne::LevelOne(){}

LevelOne::LevelOne(std::string name){
	this->scene_name = name;

	CreateGameObjects();
}

void LevelOne::CreateGameObjects(){
	DEBUG("Creating Level One Game Objects.");

	m_player = new Player("player", std::make_pair(300, 300));

	this->AddGameObject(*m_player);

	m_level_one = new engine::GameObject("level_one", std::make_pair(0, 0));
	CreateLevelComponents();

	this->AddGameObject(*m_level_one);
}

void LevelOne::CreateLevelComponents(){
	DEBUG("Creating Level Components.");

	m_level_background = new engine::ImageComponent(*m_level_one, "backgrounds/level_one_part_one.png", 1);

	m_level_one->AddComponent(*m_level_background);
}