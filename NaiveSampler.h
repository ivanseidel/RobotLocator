/*
 * NaiveSampler.h
 *
 *  Created on: Jul 25, 2013
 *      Author: lucas
 */

#ifndef NAIVESAMPLER_H_
#define NAIVESAMPLER_H_

#include "Sampler.h"

template <typename T>
class NaiveSampler: public Sampler<T>
{
	public:
		NaiveSampler() {}
		virtual ~NaiveSampler() {}

		virtual void resample(T* samples, double* weights, int numSamples)
		{
			T* newSamples = new T[numSamples];

			double sumWeights = 0.0;
			for(int i=0; i<numSamples; i++)
			{
				sumWeights += weights[i];
			}

			for(int i=0; i<numSamples; i++)
			{
				double rand = 0.0;
				double tempSum = weights[0];

				for(int j=0; j<numSamples; j++)
				{
					if(tempSum > rand)
					{
						newSamples[i] = samples[j];
						break;
					}

					tempSum += weights[j];
				}
			}

			for(int i=0; i<numSamples; i++)
			{
				samples[i] = newSamples[i];
			}

			delete[] newSamples;
		}
};

#endif /* NAIVESAMPLER_H_ */
