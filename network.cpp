#include "network.h"

using namespace std;

NeuralNetwork::NeuralNetwork(Node* nodeArray, int number_of_nodes, int* layer_nodes_indices) {

	int nodes_loaded = 0;

		for(int i; i < (sizeof(layer_nodes_indices)/sizeof(int)); i++) {

			int layer_node_marker = nodes_loaded;

			for(int j = nodes_loaded; j < (layer_node_marker + layer_nodes_indices[i]); nodes_loaded++) {

					bufferNodeVector.push_back(nodeArray[j]);
	
		}

		nodes.push_back(bufferNodeVector);

		bufferNodeVector.clear();

	}

}

double* NeuralNetwork::forwardPropogation() {

		

}

double* NeuralNetwork::backPropogation() {

}

double NeuralNetwork::calculateSigmoidInput(double* weights, double* xvals) {

        double z_value = 0;

    for(int i = 0; i < static_cast<int>(sizeof(weights)/sizeof(double)); i ++) {

        z_value = (weights[i] + xvals[i]);

    }

    return (1/1+exp(z_value * -1));

}
