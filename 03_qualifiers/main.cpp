#include <iostream>
#include <signal.h>
#include <unistd.h>

//volatile bool stop = false;
bool stop = false;

void sigintHandler(int){
	std::cout << "STOP ? [y/N]" << std::endl;
	char c_stop;
	std::cin >> c_stop;
	stop = (c_stop == 'y');
}

//illegal
//void add_one(const int* a){
//	*a += 1;
//}

void add_one(int* n_ptr){
	*n_ptr += 1;
}

int main(){
	signal(SIGINT, sigintHandler);

	int n = 0;
	while(!stop){
		add_one(&n);
		std::cout << "n : " << n << std::endl;
		sleep(1);
	}
}
