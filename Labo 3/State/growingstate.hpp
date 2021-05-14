#ifndef GROWINGSTATE_H
#define GROWINGSTATE_H

#include "state.hpp"

class Growingstate : public State
{
public:
	~Growingstate();
	// the fruit exists and depending on the state it tells what stage of life it is currently in
	void exist() override;
	std::string getStateName();
};

#endif