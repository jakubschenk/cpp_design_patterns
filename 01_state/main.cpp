#include <iostream>

#include "src/Consumer.h"

int main() {
    Consumer *consumer = new Consumer();

    /*
     * Make the consumer work 3 times,
     * the first time it will return 0.3f and the second time it will return .3f and get promoted,
     * the third time it will return 1.0f.
     */
    consumer->work();
    consumer->work();
    consumer->work();

    delete consumer;
    return 0;
}
