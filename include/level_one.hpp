#ifndef LEVEL_ONE
#define LEVEL_ONE

#include "scene.hpp"
#include "player.hpp"
#include "obstacle.hpp"
#include "level_one_code.hpp"
#include "audio_controller.hpp"
#include "machine_part.hpp"

namespace Azo {
	class LevelOne : public engine::Scene {
		private:
			// This is the level game object. It contains things such as background, theme, etc.
			engine::GameObject *m_level_one;

			// Add new components to level one here.
			engine::ImageComponent *m_level_background;
			engine::AudioController *m_audio_controller;
			engine::AudioComponent *m_level_theme;
			LevelOneCode *m_level_code;

			Player *m_player;

			// Add obstacles here
			Obstacle *m_obstacle;
			Obstacle *m_ground;
			Obstacle *m_obstacle_2;
			MachinePart *m_part;

		private:
			//Don't forget to add the new objects using this function.
			void CreateGameObjects();

			// If we're going to add something to the level game object, do it in this function.
			void CreateLevelComponents();

			// After adding things that collide (obstacles, for exemple), add they as paren'ts here.
			void AddLevelParents();
		public:
			LevelOne();
			LevelOne(std::string name);
	};
}

#endif