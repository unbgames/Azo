#include "invisible_block.hpp"

using namespace Azo;

InvisibleBlock::InvisibleBlock(){}

InvisibleBlock::InvisibleBlock(std::pair<double, double> position_relative_to_parent, std::pair<double, double> size){
	DEBUG("Creating Blocks");
	m_position_relative_to_parent = position_relative_to_parent;
	m_size = size;

	m_half_size.first = m_size.first / 2.0f;
	m_half_size.second = m_size.second / 2.0f;

	m_center = m_half_size;
}