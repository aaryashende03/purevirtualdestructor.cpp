#include<iostream>
using namespace std;
class Base
{
	public: int i , j;
	
Base()
{
cout<<"Base Constructor"<<endl;
}

virtual~Base() = 0; //Pure virtual Destructor

void fun()
{
cout<<"Base fun"<<endl;
}

};

Base:: ~Base() //Empty Defintion
{
	
}

class Derrived : public Base
{

public: int x , y;

Derrived()
{
cout<<"Derrived Constructor"<<endl;
}



};

int main()
{

//Base bobj;
Derrived dobj;
dobj.fun();
return 0;

}
	