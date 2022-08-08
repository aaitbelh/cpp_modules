// #include<iostream>
// class super
// {
// 	public:
// 		std::string name;
// 		super() { std::cout << "class super::Constructor" << std::endl; }
// 		~super() { std::cout << "class super::Destructor" << std::endl; }
// };

// class A{
// public:
//   std::string name;
//   A()  { std::cout << "class A::Constructor" << std::endl; }
//   ~A()  { std::cout << "class A::Destructor" << std::endl; }
// };
// class B
// {
// public:
// 	std::string name;
//   B()  { std::cout << "class B::Constructor" << std::endl; }
//   ~B()  { std::cout << "class B::Destructor" << std::endl; }
// };
// class C: public B, public A
// {
// public:
//   C()  { std::cout << "class C::Constructor" << std::endl; }
//   ~C()  { std::cout << "class C::Destructor" << std::endl; }
//   void setname()
//   {
// 	this->name = "LOL";
//   }
// };
// int main(){
//     C c;
//     return 0;
// }