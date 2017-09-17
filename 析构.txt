#include<iostream.h>
class a{
public:
	a(){
	cout<<"a in\n";
	}
	~a(){
	cout<<"a out\n";
	}
};
class b:public a{
public:
	b(){
	cout<<"b in\n";
	}
	~b(){
	cout<<"b out\n";
	}
};
class c:public b{
public:
	c(){
	cout<<"c in\n";
	}
	~c(){
	cout<<"c out\n";
	}
};
void main(){
c c1;
}