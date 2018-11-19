#ifndef LOG_H
#define LOG_H

class Log {  //using the singleton method of creating the class
	
	private:
	    Log();
	   
	public:

	 
	    static Log& getInstance() ; 
	   
	    void printThis(int value);
	
	   

	 }; // end of Log class    
	 
	 #endif