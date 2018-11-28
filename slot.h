//
// Created by starrynight on 2018/11/25.
//

#ifndef MANUEL_PROJECT3_MASTER_SLOT_H
#define MANUEL_PROJECT3_MASTER_SLOT_H

#include "Vehicle.h"
#include <iostream>
class Slot{
public:
    Slot (std::string typein,Vehicle *temp);
    explicit Slot (std::string typein);
    int Is_empty();
    Vehicle& return_vehicle();
    std::string return_type();
    void Make_empty();

private:
    Vehicle *V;
    std::string type;
    int empty;
};
#endif //MANUEL_PROJECT3_MASTER_SLOT_H
