#pragma once

class Neuron{
	bool actFuncFlag;            //Activaition function flag(sigmoid ol linear)
	unsigned int layerNumber;

	std::vector<double> input;
	std::vector<double> output;
	std::vector<double> weights;
	std::vector<double> threshold;
	std::string name;
public:
	Neuron(bool actFuncFlag, std::vector<double>& input, std::vector<double>& weights, unsigned int numOfLayer);
	Neuron(bool actFuncFlag, unsigned int numOfLayer, std::string name);

	double activationFunc(double arg);
	double testFuncDerived(double arg);

	std::vector<double> getOutput();
	std::vector<double> getWeight();
	std::vector<double> getInput();
	std::vector<double> setInput(std::vector<double>& inp);
	std::vector<double> setWeight(std::vector<double>& inpW);

	void setWeights(std::vector<double>& weights);
	void showWeights();

	double inductLocalField();
	double neuronResult();

};