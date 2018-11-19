#include "Log.h"
#include <iostream>

Log::Log(){
	
}

Log& Log::getInstance(){
	
	static Log instance;
	return instance;

}
void Log::printThis(int Value){

	
	std::cout<<"print test " <<Value<< std::endl;
		
} 