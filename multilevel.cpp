#include<iostream>

using namespace std;

class Base
{
	
	
	public :
     	int A;
		int B;
	    
		Base()
		{
			cout<<"Inside Base constructor\n";
		}
	    ~Base()
		{
			cout<<"Inside Base destructor\n";
			
		}
		void fun()
		{
			cout<<"Inside Base fun\n";
		}
};

class Derived : public Base
{
	public:
	      int X,Y;
		  Derived()
		  {
			  cout<<"Inside derived constructor\n";
			  
		  }
		  ~Derived()
		  {
			  cout<<"Inside derived destrcutor\ntor\n";
		  }
		  void gun()
		  {
			  cout<<"Inside gun of Derived\n";
		  }
};

class DerivedX :public Derived
{
	public:
	     int i,j;
		 DerivedX()
		 {
			 cout<<"Inside DerivedX constructor\n";
		 }
		 ~DerivedX()
		 {
			 cout<<"Inside DerivedX destructor\n";
			 
		 }
		 void sun()
};


int main()
{
	Derived * ptr =NULL;
	
	ptr =new Derived;
	
    ptr->fun();
	ptr->gun();
	
	delete ptr;
	
	
	

	return 0;
}