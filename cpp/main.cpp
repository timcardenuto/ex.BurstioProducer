#include <iostream>
#include "ossie/ossieSupport.h"

#include "BurstioProducer.h"
extern "C" {
    Resource_impl* make_component(const std::string& uuid, const std::string& identifier)
    {
        return new BurstioProducer_i(uuid.c_str(), identifier.c_str());
    }
}

