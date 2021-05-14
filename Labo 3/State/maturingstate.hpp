#ifndef MATURINGSTATE_H
#define MATURINGSTATE_H

#include "state.hpp"

class MaturingState : public State
{
public:
	~MaturingState();
	// the fruit exists and depending on the state it tells what stage of life it is currently in
	void exist() override;
	std::string getStateName();
};

#endif