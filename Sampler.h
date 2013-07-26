/*
 * Sampler.h
 *
 *  Created on: Jul 25, 2013
 *      Author: lucas
 */

#ifndef SAMPLER_H_
#define SAMPLER_H_

template <typename T>
class Sampler
{
	public:
		Sampler() {}
		virtual ~Sampler() {}

		virtual void resample(T* samples, double* weights, int numSamples) = 0;
};

#endif /* SAMPLER_H_ */
