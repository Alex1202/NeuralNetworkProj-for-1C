#include "stdafx.h"
Neuron::Neuron(bool actFuncFlag, std::vector<double>& input, std::vector<double>& weights, unsigned int numOfLayer){
	this->actFuncFlag = actFuncFlag;
	this->layerNumber = numOfLayer;
	for(unsigned int i = 0; i < input.size(); ++i){
		this->input.push_back(input[i]);
		this->weights.push_back(weights[i]);
	}
}


Neuron::Neuron(bool actFuncFlag, unsigned int numOfLayer, std::string name) : actFuncFlag(actFuncFlag),
															layerNumber(numOfLayer){
	this->name = name;
	for(unsigned int i = 0; i < 1; ++i){
		weights.push_back(0.1);
	}
}

double Neuron::activationFunc(double arg){
	if(actFuncFlag == true){
		return tanh(arg);
	}
	else{
		return arg;
	}
}

double Neuron::testFuncDerived(double arg){
	if(actFuncFlag == true){
		std::cout << "Sigmoid\n";
		return 4/pow((exp(arg) + exp(-arg)),2);
	}
	else{
		std::cout << "Linear\n";
		return arg;
	}
}

std::vector<double> Neuron::getOutput(){
	return this->output;

}

void Neuron::setWeights(std::vector<double>& weights){
	std::cout << "Inside setWeights\n";
	for(unsigned int i = 0; i < weights.size(); ++i){
		this->weights.push_back(weights[i]);
	}
}

void Neuron::showWeights(){
	for(unsigned int i = 0; i < this->weights.size(); ++i){
		std::cout << weights[i]<<"\n";
	}
}

std::vector<double> Neuron::getWeight(){
	return this->weights;
}

std::vector<double> Neuron::getInput(){
	return this->input;
}

double Neuron::inductLocalField(){
	double result = 0;
	for(unsigned int i = 0; i < this->input.size(); ++i){
		result += input[i]*weights[i]; 
	}
	return result;
}

double Neuron::neuronResult(){
	return this->activationFunc(inductLocalField());
}

std::vector<double> Neuron::setInput(std::vector<double>& inp){
	this->input.clear();
	for(unsigned int i = 0; i < inp.size(); ++i){
		input.push_back(inp[i]);
	}
	return input;
}

std::vector<double> Neuron::setWeight(std::vector<double>& inpW){
	this->weights.clear();
	for(unsigned int i = 0; i < inpW.size(); ++i){
		weights.push_back(inpW[i]);
	}
	return input;
}