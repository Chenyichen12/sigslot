
import sigslot;

#include <iostream>
int main(){
    sigslot::signal<> sig;
    sigslot::connect(sig, [](){
        std::cout << "hello world" << std::endl;
    });
    sig();
    return 0;
}

// #include "../include/sigslot/signal.hpp"

// int main(){
//     sigslot::signal<> sig;
// }