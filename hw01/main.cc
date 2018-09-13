#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	long f=0.0;  
	long c=0.0;  
	
	cout<< "enter temp in Fahrenheit: " ;
	cin>> f;
	cout << "f input is: " << f << endl;
	c = (5/(double)9)*(f-32); 
	
	//cout << fixed  << setprecision(3) << c << " in celsius";
	cout << c << " in celsius";
	return 0;
}

