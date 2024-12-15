//
// Created by Graham Hill on 2024/12/15.
//

#ifndef BUTTON_H
#define BUTTON_H

#include "../metaSystems/MetaObject.h"

class Button : public MetaObject {
    MY_OBJECT(Button, "buttonClicked");
public:
    Button();

    void click();
};






#endif //BUTTON_H
