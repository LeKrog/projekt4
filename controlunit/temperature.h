#pragma once
#ifndef TEMPERATURE_H
#define TEMPERATURE_H
<<<<<<< Updated upstream
=======
#include "controlunit.h"
#include "arduinoIF.h"
>>>>>>> Stashed changes

#include <unistd.h>
#include <stdint.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <iostream>
using namespace std;

class Temperature
{
public: 
	Temperature();
	~Temperature();
	float getTemp();
	void setTemp(int );
	void startFan();
	void stopFan();
	//void startHeater();
	//void stopHeater();
private: 


};
#endif
