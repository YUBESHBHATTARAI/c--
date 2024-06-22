// C++ namespace example: by using keyword
#include <iostream>

using namespace std;

namespace First{

void sayHello(){

cout << "Hello First Namespace" << endl;

}

}

namespace Second{

void sayHello(){

cout << "Hello Second Namespace" << endl;

}

}

//using namespace First;

using namespace Second;

int main () {

sayHello();

return 0;

}