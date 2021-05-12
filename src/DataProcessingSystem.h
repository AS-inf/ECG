//
// Created by xxx on 10.05.2021.
//

#pragma once
#include "libs.h"
#include "globals.cpp"
#include "Memory.h"
#include "ForwardProcessingStep.h"




using namespace std;
class DataProcessingSystem
{
public:
    DataProcessingSystem() noexcept;
    virtual void Init() noexcept(false);
    
protected:
    std::vector<std::shared_ptr<Memory>> steps;

};


