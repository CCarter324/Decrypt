// main.cpp
//
// tester program for your debugged decrypt() function
//

#include "stdafx.h"
#include "decrypt.h"
#include <string>
#include <iostream>
using std::cout; using std::endl;


int main()
{
	// C.C.
	std::string cc_actual_text = decrypt("GZ ZNK KTJ UL 'ZOZGTOI', ZNK HUGZ YOTQY", -6);
	std::string cc_expected_text = "AT THE END OF 'TITANIC', THE BOAT SINKS";
	cout << cc_actual_text << endl;
}

