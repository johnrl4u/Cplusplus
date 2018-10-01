#include <cstdio>
#include <iostream>
#include <iomanip>
#include <fstream>


using namespace std;


int main(){
	
FILE* fp = fopen("test.ppm", "rb");

char string[3];

fscanf(fp, "%s", string); //retrieves magic number p6

printf("%s\n", string);
 
int width;

fscanf(fp, "%d", &width);

printf("%d\n", width);

int height;

fscanf(fp, "%d", &height);

printf("%d\n", height);

int size;

fscanf(fp, "%d", &size);

printf("%d\n", size); 


unsigned char* array = new unsigned char[255];
//array = NULL;
fread(array, sizeof(char), 255, fp);
fwrite(array, sizeof(char), 255, fp);
/*
unsigned char array[255];

fread(array, sizeof(char), 255, fp); 
fwrite(array, sizeof(char), 255, fp);
*/
//printf("i am here\n");
for (int i=0; i <= 255; i++){
printf("%d\n ", &array[i]);
}
 // */
       delete[] array;
	   fclose(fp); 
}



