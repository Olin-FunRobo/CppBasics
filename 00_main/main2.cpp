#include <iostream>

int main(int argc, char* argv[]){
	std::cout << "ARGC ... " << argc << std::endl;
	std::cout << "ARGV ... {";
	for(int i=0; i<argc; ++i){
		std::cout << argv[i] << ", "; //std::endl;
	}
	std::cout << '}' << std::endl;

	return 0;
}
