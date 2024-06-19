#ifndef DESIGN_PATTERNS_STATE_STATE_H
#define DESIGN_PATTERNS_STATE_STATE_H

/***
 * @brief State Class Abstraction
 * This is the base class for all the states that will be implemented.
 * The handle method has to be implemented in all of the derived classes.
 * This method will be called by the context class to execute the state's behavior.
 */
class State {
public:
    virtual float work() = 0;
};

/***
 * @brief Derived State A Class
 * This class implements the behavior of the state.
 */
class StateA : public State {
public:
    /*
     * This method is the handler that executes the behavior of the state.
     * In this case, the handler is called "work" and it returns a float, but it can be named anything and return any type.
     */
    float work() override;
};

/***
 * @brief Derived State B Class
 * This class implements the behavior of the state.
 */
class StateB : public State {
public:
    /*
     * Same as StateA, this method is the handler that executes the behavior of the state.
     */
    float work() override;
};


#endif // DESIGN_PATTERNS_STATE_STATE_H
