//
// Created by xxx on 15.03.2021.
//

#pragma once

#include "libs.h"
#include "globals.cpp"
#include "DataProcessingSystem.h"
using namespace std;

class EcgReader
{

public:

    void run();
    EcgReader();
    ~EcgReader();
    
private:
    DataProcessingSystem dataProcessingSystem;
    void updateInputBuffer();
    void init();
    void mainLoop();
    void cleanup();
    

public:

    
};

