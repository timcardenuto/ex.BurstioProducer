#include <iostream>
#include "ossie/ossieSupport.h"

#include "BurstioProducer.h"
int main(int argc, char* argv[])
{
    BurstioProducer_i* BurstioProducer_servant;
    Component::start_component(BurstioProducer_servant, argc, argv);
    return 0;
}

