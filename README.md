## ex.BurstioProducer ##

This Redhawk Component produces example Burstio packets with float data and string meta-data. Burstio allows you to use connection tables which can route data streams to specific downstream components by matching the data streamID with a connectionID. In this case, the Burstio data will only flow to the first Component connected to which by default is given the connectionID "connection_1"
