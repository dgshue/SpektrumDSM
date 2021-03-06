<img src="lemonrx.png" width=300>

This little Arduino libary allows you to access the signals on a Spektrum DSM
serial receiver using an Arduino.  It uses interrupts, rather than polling. The
library provides two C++ classes: SpektrumDSM1024, for older receivers
using seven channels and 10-bit precision; and SpektrumDSM2048, for modern
receivers (like the Lemon RX) using eight channels and 11-bit precision.  There
is also a standalone
[sketch](https://github.com/simondlevy/SpektrumDSM/tree/master/examples/BindSpektrum) 
allowing you to bind your receiver to your transmitter using an Arduino Uno,
Mega, or other five-volt Arduino board.  

I have tested this library only on the SpektrumDSM2048 class.

By default the library uses Serial1 to communicate with the receiver.  To use
another serial port, change the values <b>SERIAL</b> and <b>SERIAL_EVENT</b> at
the top of SpektrumDSM.h.

This library borrows heavily from David McGriffy's [Drone Control
System](https://github.com/dmcgriffy/DroneControlSystem/blob/master/DCS/RX.cpp).

