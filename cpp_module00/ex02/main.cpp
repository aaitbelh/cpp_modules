#include <iostream>

class Account
{
	public:
		Account()
		{
			lol = 100;
			std::cout << lol;
		}
		void f(int a)
		{
			lol += a;
		}
		static int getlol()
		{
			return lol;
		}
	private:
		static int lol;
};

int Account::lol = 0;
int main(){
	Account p;
	p.f(5);
	std::cout << std::endl;
	std::cout << p.getlol();
}