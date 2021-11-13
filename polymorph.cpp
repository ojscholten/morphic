

// polymorphism can relate to overwriting inheritance, and code which completely changes form through the use of a polymorphic engine
// this program represents the latter, aiming at changing its form while retaining functionality.
// this can be achieved in a few ways

// 1. start by achieving autonomous self-compilation
// 2. modify compilation procedure to introduce basic randomisation - goal should be novel hash

#include <iostream>
#include <string>
#include <stdlib.h> // rand
#include<time.h> // for srand seed

using namespace std;


class Engine{

public:
	string source_code;

	// constructor
	Engine(){

		decrypt();
	}

private:
	int key;
	int decrypt(){
		srand(time(0));
		key = rand();
		cout << "decrypting body, key: " << key << "\n";
		return 1;
	}

};



int body(){

	cout << "this is the program body\n";

	return 1;

}

int duplicate(){

	cout << "duplicating myself\n";
	return 1;
}



int main(int argc, char const *argv[])
{

	Engine poly;

	body();
	duplicate();

	return 0;
}