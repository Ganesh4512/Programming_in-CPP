class Demo
{
	public:
	void fun( int *p)
	{
		cout<<"First defination";

	}

	void(float *p)
	{
		cout<<"Second definitaion";
	}
	void(int no)
	{
		cout<<"Third definitaion";
	}
};

int main()
{	
	int no = 11;
	float f =3.14;

	Demo.obj();
	obj.fun(no);
	obj.fun(&no);
	obj.fun(&f);


	

	
	return 0;
}