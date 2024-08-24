#include "A.h"

void A::doSomething() {
    std::cout << "Class A is doing something." << std::endl;

    B b;
    b.performAction();
}
