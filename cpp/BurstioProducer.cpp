#include "BurstioProducer.h"

PREPARE_LOGGING(BurstioProducer_i)

BurstioProducer_i::BurstioProducer_i(const char *uuid, const char *label) :
    BurstioProducer_base(uuid, label)
{
}

BurstioProducer_i::~BurstioProducer_i()
{
}

void BurstioProducer_i::constructor()
{
	// connection_1 is the default connectionID for the first waveform connection
	burstFloat_out->addConnectionFilter("datastream1","connection_1");
	burstFloat_out->setRoutingMode(burstio::ROUTE_CONNECTION_STREAMS);
}

int BurstioProducer_i::serviceFunction()
{
	float data[5] = {1.0,2.0,3.0,4.0,5.0};

	BURSTIO::BurstSRI sri;
	sri.streamID = "datastream1";
	sri.keywords.length(2);
	sri.keywords[0].id = "my_string0_id";
	sri.keywords[0].value <<= "MyString0";
	sri.keywords[1].id = "my_string1_id";
	sri.keywords[1].value <<= "MyString1";

	BURSTIO::FloatBurst burst;
	burst.SRI = sri;
	burst.EOS = false;
	burst.T = burstio::utils::now();
	burst.data.length(5);
	for (int i=0; i<5; i++) {
		burst.data[i]=data[i];
	}

	burstFloat_out->pushBurst(burst);

	sleep(1);

	return NORMAL;
}

