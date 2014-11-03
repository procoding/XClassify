#ifndef NODE_H
#define NODE_H

#include "node.h"
#include <iostream>
#include <stdlib.h>
#include <vector>

class Node {

public:

   Node(int number_of_weights, int max_weight_init_bound, int min_weight_init_bound);

   double getActivationValue();
   void setActivationValue(double set_value);
   double getDeltaValue();
   void setDeltaValue(double set_value);
   std::vector<double> getWeights();

private:

    std::vector<double> weights;
    double activation_value;
    double delta_value;

};

#endif
