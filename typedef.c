#include<stdio.h>

//typedef JUNA_NAW  NAWIN_NAW

typedef int INTEGER;

typedef unsigned long int UNLONG;

struct Demo
{
	int a;
	int b;
	
};
typedef struct demo DEMO;
typedef struct Demo * PDEMO;

 

int main()
{
	INTEGER i =10;   // inyt i =10;
	ULONG j =21;		// unsigned long int j =21;
	DEMO OBJ; 			//struct Demo obj;//
	PDEMO ptr = &obj; 		//struct Demo * ptr = &obj;
	
	
	return  0;
	
}