#ifndef DESIGN_PATTERNS_STATE_CONSUMER_H
#define DESIGN_PATTERNS_STATE_CONSUMER_H

#include "State.h"

/***
 * @brief Consumer Class
 * This class is the context class that will use the state classes to execute the behavior.
 * The state object can be changed at runtime to change the behavior of the consumer.
 */
class Consumer {
private:
    float m_value;
    State *m_state;

    /***
     * @brief Promote Method
     * This method is used to change the state of the consumer.
     * It deletes the current state and creates an instance of State B.
     */
    void promote();

public:
    Consumer();

    /***
     * @brief Work Method
     * This method calls the work method of the current state.
     * If the value returned by the state is greater than 0.5,
     * the state is changed to State B (the consumer/context gets "promoted").
     */
    void work();

    float getValue();
};


#endif // DESIGN_PATTERNS_STATE_CONSUMER_H
