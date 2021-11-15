#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string read_source(string path){
	///
	/// read in the source code of a program from disk
	/// and return it as a string object
	///
	fstream file;
	string source;

	file.open(path, ios::in); // open the file
	if (file.is_open()){
		string line;
		while (getline(file, line)){ // read each line
			source.append(line + "\n"); // add to source
		}
		file.close(); // close the file
	}
	return source; 
}

string morph_source(string source){

	// changes the string and returns it
	string modified_source;


	// this is where the various obfuscation techniques will
	// be implemented
	// dead-code injection
	// register reassignment (assembly level)
	// subroutine reordering (assembly level)
	// instruction substitution
	// code transposition
	// code integration

	// placeholder line
	modified_source = source;

	return modified_source;

}

void save_source(string path, string source){

	fstream file;

	file.open(path, ios::out);
	if (file.is_open()){
		file << source;
	}
	file.close();

}


int main(int argc, char const *argv[])
{
	string source = read_source("metamorph.cpp");

	save_source("test.cpp", source);

	// it works! :)
	return 0;
}