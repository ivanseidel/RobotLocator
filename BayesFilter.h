/*
 * BayesFilter.h
 *
 *  Created on: Jul 25, 2013
 *      Author: lucas
 */

#ifndef BAYESFILTER_H_
#define BAYESFILTER_H_

template <class CONTROL, class MEASUREMENT>
class BayesFilter
{
	public:
		BayesFilter() {}
		virtual ~BayesFilter() {}

		virtual void prediction(CONTROL control) = 0;
		virtual void correction(MEASUREMENT measurement) = 0;
};

#endif /* BAYESFILTER_H_ */
