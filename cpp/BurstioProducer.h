#ifndef BURSTIOPRODUCER_I_IMPL_H
#define BURSTIOPRODUCER_I_IMPL_H

#include "BurstioProducer_base.h"

class BurstioProducer_i : public BurstioProducer_base
{
    ENABLE_LOGGING
    public:
        BurstioProducer_i(const char *uuid, const char *label);
        ~BurstioProducer_i();

        void constructor();

        int serviceFunction();

    protected:
};

#endif // BURSTIOPRODUCER_I_IMPL_H
