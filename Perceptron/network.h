#pragma once

class Network{
	int numOfLayer;
	double result;
	std::vector<Layer> network;
public:
	Network(int numOflayer, std::vector<Layer>& net);

	double forwardProp();
	double showResult();
	double backProp();

	std::vector<Layer> getNetwork();

};