#include "node.h"

using namespace std;

Node::Node(int weight_number, int max_weight_init_bound, int min_weight_init_bound) {

for(int i = 0; i < static_cast<int>(sizeof(weights)/sizeof(double)); i++) {


    weights.push_back(rand() % (max_weight_init_bound - min_weight_init_bound) + min_weight_init_bound);

}

}

double Node::getActivationValue() {

    return activation_value;

}

void Node::setActivationValue(double set_value) {

    activation_value = set_value;

}

double Node::getDeltaValue() {

    return delta_value;

}

void Node::setDeltaValue(double set_value) {

    delta_value = set_value;

}

vector<double> Node::getWeights() {

	return weights;

}
