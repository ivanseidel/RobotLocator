/*
 * ParticleFilter.h
 *
 *  Created on: Jul 25, 2013
 *      Author: lucas
 */

#ifndef PARTICLEFILTER_H_
#define PARTICLEFILTER_H_

#include "BayesFilter.h"
#include "Sampler.h"
#include "NaiveSampler.h"

template <class CONTROL, class MEASUREMENT, class STATE>
class ParticleFilter: public BayesFilter<CONTROL, MEASUREMENT>
{
	public:
		ParticleFilter(int numParticles)
		{
			this->numParticles = numParticles;
			particles = new STATE[numParticles];
			weights = new double[numParticles];
			sampler = new NaiveSampler<STATE>();
		}

		virtual ~ParticleFilter()
		{
			delete[] particles;
			delete[] weights;
		}

		virtual void prediction(CONTROL control)
		{
			for(int i=0; i<numParticles; i++)
			{
				predictParticle(particles[i], control);
			}
		}

		virtual void correction(MEASUREMENT measurement)
		{
			for(int i=0; i<numParticles; i++)
			{
				weights[i] = measureWeightParticle(particles[i], measurement);
			}

			sampler->resample(particles, weights, numParticles);
		}

	private:
		STATE* particles;
		double* weights;
		int numParticles;

		Sampler<STATE>* sampler;

		virtual STATE predictParticle(STATE particle, CONTROL control) = 0;
		virtual double measureWeightParticle(STATE particle, MEASUREMENT measurement) = 0;

};

#endif /* PARTICLEFILTER_H_ */
