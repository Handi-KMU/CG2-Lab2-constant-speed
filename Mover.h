#pragma once

#include <core.h>

class Mover
{
public:
	Mover();
	~Mover();

	cyclone::Vector3 m_position;


	void update(float duration);
	void stop();
	void draw(int shadow);
};

