#include "Consumer.h"
#include <iostream>

// Constructor, initializes by default to State A with a value of 0.0f
Consumer::Consumer() : m_value(0.0f), m_state(new StateA()) {}

/*
 * This is the handler for changing the state of the consumer.
 * It deletes the current state and creates a new instance of State B.
 */
void Consumer::promote() {
    delete m_state;
    m_state = new StateB();
}

/*
 * This method calls the work method of the current state.
 * If the value returned by the state is greater than 0.5,
 * the state is changed to State B (the consumer/context gets "promoted").
 */
void Consumer::work() {
    float finishedWork = m_state->work();

    m_value += finishedWork;

    std::cout << "The consumer has done some work and the value is: " << finishedWork << std::endl;
    std::cout << "The consumer is now at value of: " << m_value << std::endl;

    if (m_value > 0.5f) {
        this->promote();
    }
}

// Getter for the value
float Consumer::getValue() {
    return m_value;
}