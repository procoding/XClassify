#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H
#include "node.h"
#include <math.h>
#include <vector>

class NeuralNetwork {

        public:

            NeuralNetwork(Node* nodes, int number_of_nodes, int* layer_nodes_index);
            
        private:

		   std::vector< std::vector<Node> > nodes;
		   std::vector<Node> bufferNodeVector;

           double* forwardPropogation();
           double* backPropogation();
           double calculateSigmoidInput(double weights[], double xvals[]);
           double sigmoidFunction(double input);

};

#endif
