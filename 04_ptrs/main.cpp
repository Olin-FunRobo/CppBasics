#include <iostream>

void add_one(int* x){
	*x += 1;
}

int main(){
	// add_one(&5); -- illegal
	int n = 5;
	int* n_ptr = &n;
	std::cout << "n : " << n << std::endl;
	add_one(n_ptr);
	std::cout << "n : " << n << std::endl;
}
