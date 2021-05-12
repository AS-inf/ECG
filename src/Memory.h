//
// Created by xxx on 12.05.2021.
//
#pragma once
#include "libs.h"
#include "globals.cpp"
using Buffer = std::queue<globals::sample>;

using namespace std;
class Memory
{
    std::vector<shared_ptr<Buffer>> inputBuffer;
    std::vector<shared_ptr<Memory>> forwardTriggerSteps;
};


