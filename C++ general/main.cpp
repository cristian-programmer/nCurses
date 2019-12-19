#include <iostream>
using namespace std;


class practice{
	private:
		int size;
		char *cpu = "IA32";
	public:
	int getSizeMemory();
	void printSpecification();

};


int practice::getSizeMemory(){
	size = 1024;
	return 1024;
}

void practice::printSpecification(){

	cout<<"CPU arch"<<endl;
	cout<<cpu<<endl;
}


int main(){
	cout<<"Hi"<<endl;
	practice m;
	m.printSpecification();
	return 0;
}
