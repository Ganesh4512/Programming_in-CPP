#include<iostream>
using namespace std;

class Maths
{
	public:
	  int iNo1;
	  int iNo2;
	  
	  Maths()
	  {
		  iNo1 =0;
		  iNo2 =0;
		  
		  
	  }
	  
	  Maths (int A,int B)
	  {
		  iNo1=A;
		  iNo2=B;
		 
		  
	  }
	
	int Addition()
	{
		return iNo1+iNo2;
	}
	
	int Substraction()
	{
		return iNo1-iNo2;
	}
	
};
int main()
{
	Maths mob1;
	Maths mob2(11,10);
	int ret =0;
	
	ret =mob2.Addition();
	cout<<"Addition"
	
	return 0;
}