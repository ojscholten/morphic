#include <iostream> // std:cout
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

	void encrypt(){
		cout << "encrypting body\n";
		
	}


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