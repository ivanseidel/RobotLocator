/*
 * SimpleRobotParticleFilter.cpp
 *
 *  Created on: Jul 26, 2013
 *      Author: lucas
 */

#include "SimpleRobotParticleFilter.h"

SimpleRobotParticleFilter::SimpleRobotParticleFilter(int numParticles) : ParticleFilter<Control, Measurement, State>::ParticleFilter(numParticles)
{
	// TODO Auto-generated constructor stub

}

SimpleRobotParticleFilter::~SimpleRobotParticleFilter()
{
	// TODO Auto-generated destructor stub
}

State SimpleRobotParticleFilter::predictParticle(State particle, Control control)
{
	return particle;
}

double SimpleRobotParticleFilter::measureWeightParticle(State particle, Measurement measurement)
{
	return 1.0;
}

