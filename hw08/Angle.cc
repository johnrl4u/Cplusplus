#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <iomanip>
#include <vector>
#include "Angle.h"


Angle::Angle()
{
	this->deg;
}

/*
need a method with a while loop
for Angle > then 360 subtract 360 || less
then 0 add 360
*/

    Angle Angle::operator+(const Angle& deg) const 
	{

		int sum = this->deg + deg.getDeg();
		
		Angle A;
		A.set(sum);
		
        return A;
	}  
	
	Angle Angle::operator-(const Angle& deg) const 
	{

		int sum = this->deg - deg.getDeg();
		
		Angle A;
		A.set(sum);
		
        return A;
	}  
	
	Angle Angle::operator*(const Angle& deg) const 
	{

		int sum = this->deg * deg.getDeg();
		
		Angle A;
		A.set(sum);
		
        return A;
	}  
   
	Angle Angle::operator/(const Angle& deg) const 
	{

		int sum = this->deg / deg.getDeg();
		
		Angle A;
		A.set(sum);
		
        return A;
	}  
	
    void Angle::set(int deg)
    {
	    
		while(deg >360)
		{
			deg=deg -360;
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
	     return this->deg;

    } //end angle method
    
	

	