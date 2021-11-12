

// polymorphism can relate to overwriting inheritance, and code which completely changes form through the use of a polymorphic engine
// this program represents the latter, aiming at changing its form while retaining functionality.
// this can be achieved in a few ways

// 1. start by achieving autonomous self-compilation
// 2. modify compilation procedure to introduce basic randomisation - goal should be novel hash

#include <iostream>
#include <string>

using namespace std;


class Engine{

public:
	string source_code;

};



int main(int argc, char const *argv[])
{

	Engine poly;

	poly.source_code = "this is the sauce";

	cout << poly.source_code << "\n";

	return 0;
}