//============================================================================
// Name        : Localization.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>

#include "BayesFilter.h"
#include "ParticleFilter.h"
#include "SimpleRobotParticleFilter.h"
#include "Control.h"
#include "Measurement.h"
#include "State.h"

int main(void)
{
	puts("Hello World!!!");

	BayesFilter<Control, Measurement>* filter = new SimpleRobotParticleFilter(10);

	return 0;
}
