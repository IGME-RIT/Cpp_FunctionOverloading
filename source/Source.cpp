/*
FunctionOverload
(c) 2016
original authors: David I. Schwartz
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*	This tutorial illustrates the concept of function overloading.
*	It also covers the concepts such as data type, function typeid and structure.
*/
// Function Overloading: https://msdn.microsoft.com/en-us/library/5dhe1hce.aspx
// Overview of Overloading: https://msdn.microsoft.com/en-us/library/6t42e4h8.aspx

#include <iostream>   // for the cout
#include <typeinfo>   // for typeid() function
 using namespace std; // for the cout

struct Thing {                                 // declare Thing struct type 
	void print(const int x) const {            // define print function (argument type: const int)
		cout << typeid(x).name() << endl;      // print out the type name of the parameter
	}
	void print(const float x) const {          // overload the print function (argument type: const float)
		cout << typeid(x).name() << endl;      // print out the type name of the parameter
	}
	void print(const double x) const {         // overload the print function (argument type: const double)
		cout << typeid(x).name() << endl;      // print out the type name of the parameter
	}
	void print(const char x) const {           // overload the print function (argument type: const char)
		cout << typeid(x).name() << endl;      // print out the type name of the parameter
	}
	void print(const char x, const int y) const {    // overload the print function (argument type: const char, const int)
        cout << typeid(x).name() << "," << typeid(x).name() << endl;  // print out the type name of the parameters
	}
};


int main() {

	Thing t;           // define object t of type Thing
	t.print(1);        // output: int
	t.print(1.1f);     // output: float
	t.print(1.1);      // output: double
	t.print('c');      // output: char
	t.print(1, 'a');   // output: char,char
	
	system("pause");
}