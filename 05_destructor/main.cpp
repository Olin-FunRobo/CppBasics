#include <iostream>

class mem{
	private:
		int* a;
	public:
		mem(int val){
			a = new int(val);
		}
		~mem(){
			std::cout << "[CLASS] A DELETED" << std::endl;
			delete a;
		}
};

void testClass(){
	mem m_a(5);
}

int main(){

	// case 1 : POD
	int* a = nullptr;
	try{
		a = new int();
		*a = 15;
		throw "!!";
		delete a;
		a = nullptr;
		std::cout << "[NON-CLASS] A DELETED" << std::endl;
	}catch(...){
		std::cout << "[NON-CLASS] CAUGHT" << std::endl;
	}

	// case 2 : class
	try{
		mem m_a(5);
		throw "!!";
	}catch(...){
		std::cout << "[CLASS] CAUGHT" << std::endl;
	}	
}
