#include "stdafx.h"

Network::Network(int numOfLayer, std::vector<Layer>& net){
	this->numOfLayer = numOfLayer;
	for(unsigned int i = 0; i < net.size(); ++i){
		this->network.push_back(net[i]);
	}
	std::cout <<"Inside network\n";
}


double Network::forwardProp(){   //Forward propogation
	double result = 0;
	std::vector<double> tempWeight;
	tempWeight.push_back(0.1);
	tempWeight.push_back(0.2);
	tempWeight.push_back(0.3);

	for(unsigned int i = 0; i < this->numOfLayer; ++i){ 
		network[i].genLayerOutput();		
		if(i < this->network[i].getNeurNum()){
			for(unsigned int j = 0; j < this->network[i+1].getNeurNum(); ++j){
				network[i+1].getLayer()[j][j].setInput(this->network[i].getLayerOut());
				network[i+1].getLayer()[j][j].setWeight(tempWeight);
			}
		}
		
	}
	this->result = network[1].getLayerOut()[0]; 
	return result;	
}

std::vector<Layer> Network::getNetwork(){
	return this->network;
}

double Network::showResult(){
	return this->result;
}

double Network::backProp(){ //Algorithm of backPropogation
	return 0;
}