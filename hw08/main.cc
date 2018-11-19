#include "Log.h"
#include "Fish.h"
#include "Angle.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <iomanip>
#include <vector>

int main(int argc, char** argv){
	
	//Log* m = new Log();  //create obj on heap
	
	//Log m;      //created on the stack
	 Log& m=Log::getInstance(); //calling static method ref from log.h
	
	  //m declared above as an object that ref a static method
      m.printThis(25);
	
	//A=Angle::getDeg();  //calling static method ref from angle.h
	
	Angle A;
	A.set(-35);
	
	
	
	
	//std::cout<< "This is a test" << std::endl;
	//Angle d;
	//Angle& d=Angle::getDeg();
	
	
	//m.printThis(d);
	

	
} //end of main