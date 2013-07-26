/*
 * SimpleRobotParticleFilter.h
 *
 *  Created on: Jul 26, 2013
 *      Author: lucas
 */

#ifndef SIMPLEROBOTPARTICLEFILTER_H_
#define SIMPLEROBOTPARTICLEFILTER_H_

#include "ParticleFilter.h"
#include "Control.h"
#include "Measurement.h"
#include "State.h"

class SimpleRobotParticleFilter: public ParticleFilter<Control, Measurement, State>
{
	public:
		SimpleRobotParticleFilter(int numParticles);
		virtual ~SimpleRobotParticleFilter();

	private:
		virtual State predictParticle(State particle, Control control);
		virtual double measureWeightParticle(State particle, Measurement measurement);
};

#endif /* SIMPLEROBOTPARTICLEFILTER_H_ */
