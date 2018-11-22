#include "Log.h"
#include "Fish.h"
#include "Angle.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <sstream>


int main(int argc, char** argv){
	
	//Log* m = new Log();  //create obj on heap
	
	//Log m;      //created on the stack
	 Log& m=Log::getInstance(); //calling static method ref from log.h
	
	  //m declared above as an object that ref a static method
      m.printThis(25);
	
	//A=Angle::getDeg();  //calling static method ref from angle.h
     
	int d;
	int x;
	
	//operators
	//char operator; //choose an operator s=subtract, a=add, m,d mult and div
	
    std::cout << "type a deg value:    ";
	std::cin >> d;
	std::cout << "type a second degree value:   ";
	std::cin >> x;
	//std::cout
	//std::cout << " choose an operator:    " <<std::endl;
	//std::cout << " a = add, s = subtract, m = multiply, d = divide";
	
	//std::cin >> operator;
	
	std::cout << " the 1st value entered is:  "<< d <<std::endl;
	std::cout << " the 2nd value entered is:  "<< x <<std::endl;
	
	
	//if ;
	//{
	//    int sum (d.operator+(x))
   //std::cout << " the sum of your values enter is:  "<< sum <<std::endl;
	
//	}

	Angle B;
	Angle C;	
	Angle A;
	
	B.set(d);
	C.set(x);
	
	A = B+C;
	std::cout << " What's is A when B+C:  "<< A.getDeg() <<std::endl;
	
	A = B-C;
	std::cout << " What's is A when B-C:  "<< A.getDeg() <<std::endl;
	
	A = B*C;
	std::cout << " What's is A when B*C:  "<< A.getDeg() <<std::endl;
	
	A = B/C;
	std::cout << " What's is A when B/C:  "<< A.getDeg() <<std::endl;
	
	
	/*
	int sum =d + x;	
	
	std::cout << " the sum of your values enter is:  "<< sum <<std::endl;
	
	A.set((sum));
	
	*/
	
	
	
	
	//std::cout<< "This is a test" << std::endl;
	//Angle d;
	//Angle& d=Angle::getDeg();
	
	
	//m.printThis(d);
	

	
} //end of main