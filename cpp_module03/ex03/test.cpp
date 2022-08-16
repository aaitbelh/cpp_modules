#include<iostream>
class super
{
	public:
		std::string name;
		super():name("mamella") { std::cout << "class super::Constructor" << std::endl; }
		~super() { std::cout << "class super::Destructor" << std::endl;std::cout << name  << std::endl; }
};

class A : public virtual super{
public:
  A() { name = "grboz"; std::cout << "class A::Constructor" << std::endl; }
  ~A() { std::cout << "class A::Destructor" << std::endl; }
};
class B:public virtual super
{
public:
  B()
  { name = "alaajili"; std::cout << "class B::Constructor" << std::endl; std::cout << "===========>" << name << std::endl; }
  ~B() { std::cout << "class B::Destructor" << std::endl; std::cout << "======{}{}{}====>" << name << std::endl; }
};
class C: public B, public A
{
public:
  C() { name = B::name ; std::cout << "class C::Constructor" << std::endl; }
  ~C()  { std::cout << "class C::Destructor" << std::endl; }
};
int main(){

	C c;
	std::cout << "------------>" << c.B::name<< std::endl;
	std::cout << "------------>" << c.name  << std::endl;
    return 0;
}