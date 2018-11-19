#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <iomanip>
#include <vector>
#include "Angle.h"


Angle::Angle()
{
	
}

/*
need a method with a while loop
for Angle > then 360 subtract 360 || less
then 0 add 360
*/

    void Angle::set(int deg)
    {
	
		while(deg >360)
		{
			deg=deg-360;
		}
		while(deg< 0)
		{
			deg = deg+360;
		}
        this->deg = deg;
		
		std::cout<< "deg is  " <<deg<< std::endl;
	
	}
	int Angle::getDeg()const
	{
	return deg;

    } //end angle method
    
	

	