#include "State.h"
#include <iostream>

float StateA::work() {
    std::cout << "Hi! I am State A and I am working really hard to do this! " <<
              "I will return the result of my work!" << std::endl;

    // TODO: Implement the handler logic for the state
    const float result = 0.3f;

    return result;
}

float StateB::work() {
    std::cout << "Hi! I am State B and I am working really hard to do this! " <<
              "I will return the result of my work!" << std::endl;

    // TODO: Implement the handler logic for the state
    const float result = 1.0f;

    return result;
}