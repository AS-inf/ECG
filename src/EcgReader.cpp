//
// Created by xxx on 15.03.2021.
//

#include "EcgReader.h"

void EcgReader::run()
{
    try
    {
        init();
        mainLoop();
        cleanup();
    }
    catch (std::runtime_error &e )
    {
        cleanup();
    }
    
}

void EcgReader::init()
{

}

void EcgReader::mainLoop()
{
    //watchdog
}

void EcgReader::cleanup()
{

}

void EcgReader::updateInputBuffer()
{

}

EcgReader::EcgReader()
{

}

EcgReader::~EcgReader()
{

}


