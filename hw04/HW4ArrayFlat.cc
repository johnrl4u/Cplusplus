#include <cstdio>
#include <iostream>
#include <iomanip>
#include <fstream>


using namespace std;


unsigned char* readPPM(int* width, int* height){
	

FILE* fp = fopen("test.ppm", "rb");

char string[3];

fscanf(fp, "%s", string); //retrieves magic number p6

printf("%s\n", string);  //prints p6
 
fscanf(fp, "%d", width);

printf("%d\n", *width);

fscanf(fp, "%d", height);

printf("%d\n", *height);

int size = *width* *height*3;//

int max;

fscanf(fp, "%d\n", &max);

printf("%d\n", max); 

//int* size = width* height* 3;
unsigned char* array = new unsigned char[size];   

//(use for signed array)array = NULL;

fread(array, sizeof(char), size, fp);
//fwrite(array, sizeof(char), size, fp);

/*
for (int i=0; i <= 255; i++){ 

    for (int j=0; j<=3; j++){
		
		
 
     printf("%d\n  %d\n", &array[i], &array[j]);

	
    }
    
}*/
  
      
	   
	   fclose(fp); 
 }



