#ifndef BURSTIOPRODUCER_BASE_IMPL_BASE_H
#define BURSTIOPRODUCER_BASE_IMPL_BASE_H

#include <boost/thread.hpp>
#include <ossie/Component.h>
#include <ossie/ThreadedComponent.h>

#include <burstio/burstio.h>

class BurstioProducer_base : public Component, protected ThreadedComponent
{
    public:
        BurstioProducer_base(const char *uuid, const char *label);
        ~BurstioProducer_base();

        void start() throw (CF::Resource::StartError, CORBA::SystemException);

        void stop() throw (CF::Resource::StopError, CORBA::SystemException);

        void releaseObject() throw (CF::LifeCycle::ReleaseError, CORBA::SystemException);

        void loadProperties();

    protected:

        // Ports
        /// Port: burstFloat_out
        burstio::BurstFloatOut *burstFloat_out;

    private:
};
#endif // BURSTIOPRODUCER_BASE_IMPL_BASE_H
