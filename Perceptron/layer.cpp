#include "stdafx.h"
Layer::Layer(int numOfNeur, std::vector<Neuron>& inputNeurons, unsigned int numOfLayer){
	this->numOfLayer = numOfLayer;
	this->neuronNum = numOfNeur;
	for(unsigned int i = 0; i < inputNeurons.size(); ++i){
		this->lay.push_back(inputNeurons[i]);
	}
}

std::vector<Neuron>* Layer::getLayer(){
	return &lay;
}

unsigned int Layer::getNeurNum(){
	return this->neuronNum;
}

void Layer::genLayerOutput(){
	for(int i = 0; i < this->neuronNum; ++i){
		this->layerOutput.push_back(this->lay[i].neuronResult());
	}
}

std::vector<double>& Layer::getLayerOut(){
	return layerOutput;
}