#include <wiringPi.h> //includes delay and microdelay func
#include <iostream>
//#include <stdlib.h> //needed for delay func
#include <cstdint> //needed for uint8



void start()
{
	//setup input vars
	//use 8bit type to fit 8bit input	
	uint8_t


	//setup pin GPIO16 as output
	void pinMode(6, OUTPUT);

	//DHT sensor waits for high then low signal
	//18ms, then pull up high and wait 20-40ms
	digitalWrite(6, LOW);
	delay(18);
	digitalWrite(6,HIGH);
	delayMicroseconds(40);
	
	//change setup pin to input 
	void pinMode(6, INPUT);

	int count = 0;	
	//read in 10 40bit buffers(?)
	while(count < 10)
	{
		



	}

}




int main()
{
	cout<<"starting DHT reading"<<endl;
	start();

}
//sources
/*
://www.circuitbasics.com/how-to-set-up-the-dht11-humidity-sensor-on-the-raspberry-pi/   */
