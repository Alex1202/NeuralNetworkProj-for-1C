#pragma once

class Layer{
	unsigned int numOfLayer;
	int neuronNum;
	std::vector<Neuron> lay;
	std::vector<double> layerOutput;
public:
	Layer(int numOfNeur, std::vector<Neuron>& inputNeurons, unsigned int numOfLayer);
	unsigned int getNeurNum();

	std::vector<Neuron>* getLayer();	
	std::vector<double>& getLayerOut();

	void pushInput(double& input);
	void genLayerOutput();
	
};