#include "Base.hpp"

int main() {
    Base* ptr = generate();
    identify(ptr);

    Base* ptr2 = generate();
    identify(*ptr2);

    delete ptr;
    delete ptr2;

    return 0;
}
