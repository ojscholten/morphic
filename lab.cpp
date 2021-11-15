#include <stdlib.h> // system calls
#include <iostream> // std:cout
#include <string> // string

// for reading files
#include <iostream>
#include <fstream>
#include <vector>
typedef unsigned char BYTE;

using namespace std;



int build_host(){
	///
	/// Builds the host.cpp file into a file called host. This can then be executed by calling ./host
	///
	cout << "building host\n";
	system("gcc host.cpp -lstdc++ -o host");
	cout << "host built, call ./host to execute\n";
	return 1;
}


vector<BYTE> read_program(const char* filename){
	///
	/// https://stackoverflow.com/questions/15366319/how-to-read-the-binary-file-in-c
	///
    // open the file:
    streampos fileSize;
    ifstream file(filename, std::ios::binary);

    // get its size:
    file.seekg(0, ios::end);
    fileSize = file.tellg();
    file.seekg(0, ios::beg);

    // read the data:
    vector<BYTE> fileData(fileSize);
    file.read((char*) &fileData[0], fileSize);
    return fileData;
}


int main(int argc, char const *argv[])
{

	//build_host();

	vector<BYTE> data = read_program("program");

	cout << "program size: " << data.size() << " bytes\n";


	return 0;
}