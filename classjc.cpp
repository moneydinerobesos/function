#include<iostream.h>
class py{
int x;
public:
	py(int x){
		py::x=x;
	 cout<<"class py\n";
	}

};
class a{
py d1;
public:
	a(int x):d1(x){
	
	cout<<"class a\n";
	}
};
class b:public  a{
py d2;
public:
	b(int x):a(x),d2(x){
	cout<<"class b\n";
	}
};
class c:public b{
public:
	c(int x):b(x){
	
	cout<<"class c\n";
	}
};
/*void main(){

c gogogo(5);

}*/