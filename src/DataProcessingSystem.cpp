//
// Created by xxx on 10.05.2021.
//

#include "DataProcessingSystem.h"

DataProcessingSystem::DataProcessingSystem() noexcept
{
    Init();
}

void DataProcessingSystem::Init() noexcept(false)
{
    steps.push_back(shared_ptr<ForwardProcessingStep>(new ForwardProcessingStep) );
}
