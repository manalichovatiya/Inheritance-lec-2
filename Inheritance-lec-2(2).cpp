#include<iostream>
using namespace std;
class Value1{
	public:
	int a;
	 Value1(){
	 	cout<<"Enter value 1 : ";
	 	cin>>a;
	}
};
class Value2 : public Value1{
	public:
		int b;
	 Value2(){
	 	cout<<"Enter value 2 : ";
	 	cin>>b;
	}
};
class Value3  {
	public:
		int c;
	 Value3(){
	 	cout<<"Enter value 3 : ";
	 	cin>>c;
	}
};
class Value4:public Value2 , public Value3{
	public:
		int d,e;
	 Value4(){
	 	cout<<"Enter value 4 : ";
	 	cin>>d;
        e = a+b+c+d;
		cout<<endl<<"Sum of all value is = "<<e;
	}
};
int main(){
      Value4 obj;	
	return 0;
}
