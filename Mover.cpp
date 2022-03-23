
#include <iostream>
#include "Mover.h"
#include <gl/glut.h>
#include "timing.h"


Mover::Mover()
{
	m_position = cyclone::Vector3(0, 3, 0);
}


Mover::~Mover()
{
}

void Mover::update(float duration)
{
		
	duration *= 5.0f;
	cyclone::Vector3 d = cyclone::Vector3(1, 0, 0) * duration;
	m_position += d;

	if (m_position.x > 100) m_position.x = 0;
}

void Mover::stop()
{

	TimingData::get().deinit();

}
void Mover::draw(int shadow)
{

	if (shadow) {
		glColor3f(0,0,0);
	}
	else {
		glColor3f(1.0f, 0,0 );
	}


	glPushMatrix();
	//glTranslatef(0,1,0);
	glTranslatef(m_position.x, m_position.y, m_position.z);
	glutSolidSphere(2.0f, 60, 60);
	glPopMatrix();

}