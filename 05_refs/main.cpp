#include <iostream>

void add_one(int& x){
	std::cout << "adding one to n " << std::endl;
	x += 1;
}

int main(){
	int n = 0;
	std::cout << "n : " << n << std::endl;
	add_one(n);
	std::cout << "n : " << n << std::endl;
}
