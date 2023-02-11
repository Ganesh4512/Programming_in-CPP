#include<iostream>
using namespace std;

class Overloading
{
   public:
     int Add(int a,int b)
	 {
		 cout<<"Addition of 2 integers\n";
		 return a+b;	 
	 }
	 float Add(float a,float b)
	 {
		cout<<"Addtion of floats\n";
	    return a+b;
	 }
      double Add(double a,double b)
	  {
		  cout<<"Addition of doubles\n";
		  return a+b;
		  
	  }	  
      int Add(int a,int b,int c)
	  {
		  cout<<"Addition of 3 intengers \n ";
		  return a+b+c;
	  }
	  void Fun(int a,int b)
	  {}
      void Fun(float x,float y)  
	  {}
	 
    
};

int main()
{
	Overloading obj;
	int i;
	float f;
	double d;
	
	
	i =obj.Add(11,21);
	cout<<i<<"\n";
	i=obj.Add(11,21,51);
	cout<<i<<"\n";
	f=obj.Add(10.9f,89.5f);
	cout<<f<<"\n";
	d=obj.Add(10.9,89.5);
	cout<<d<<"\n";
	
	return 0;
	
	
	
	
}