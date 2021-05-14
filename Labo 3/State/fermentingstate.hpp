#ifndef FERMENTINGSTATE_H
#define FERMENTINGSTATE_H

#include "state.hpp"

class FermentingState : public State
{
public:
	~FermentingState();
	// the fruit exists and depending on the state it tells what stage of life it is currently in
	void exist() override;
	std::string getStateName();
};

#endif