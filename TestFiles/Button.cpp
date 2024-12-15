//
// Created by Graham Hill on 2024/12/15.
//

#include "Button.h"

Button::Button(){
    registerSignals();  // Automatically register all signals
}

void Button::click()  {
    std::cout << "Button clicked!\n";
    emitSignal("buttonClicked");  // Emit only if registered
}
