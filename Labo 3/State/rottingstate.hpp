#ifndef ROTTINGSTATE_H
#define ROTTINGSTATE_H

#include "state.hpp"

class RottingState : public State
{
public:
	~RottingState();
	// the fruit exists and depending on the state it tells what stage of life it is currently in
	void exist();
	std::string getStateName();
};

#endif