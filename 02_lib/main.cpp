#include <iostream>
#include <string>
#include <stdlib.h>
#include "lib.h"

void usage(){
	std::cerr << "USAGE : main.o <number>" << std::endl;
}

int main(int argc, char* argv[]){
	if(argc > 1){
		int n = atoi(argv[1]);
		std::cout << (is_prime(n)? "TRUE" : "FALSE") << std::endl;
	}else{
		usage();
	}
}
