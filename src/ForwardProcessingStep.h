//
// Created by xxx on 12.05.2021.
//

#pragma once
#include "Memory.h"

class ForwardProcessingStep : public Memory
{
    //shared_ptr<mutex> < vector | all_coherent_mutex
    //shared_ptr<mutex> < vector | all_coherent_mutex
    //triggers : condition_variable
public:
    ForwardProcessingStep();
    virtual void operator()(void ); //check buffers/triggers > perform op
};

