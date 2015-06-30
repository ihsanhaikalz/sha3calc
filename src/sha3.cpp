//============================================================================
// Name        : sha3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
 using std::cout;
 using std::endl;
#include "Sha3.h"
#include <fstream>
  using std::ofstream;
using namespace std;

int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	//return 0;
	ofstream stream;
	char k[32] ;
	char r[64] ;

	sha3_ctx ctx;

	Sha3Init(&ctx);
	Sha3Update(&ctx, (unsigned char *)k,  32);
	cout << "!!!Hello f!!!" << endl;
	Sha3Final(&ctx, (unsigned char *)r);

	cout << "!!!Hello World!!!" << endl;
	cout << r ;//<< endl;

	stream.open("a.txt");
	    if( !stream )
	        cout << "Opening file failed" << endl;
	    // use operator<< for clarity
	    stream << r << endl;
	    // test if write was succesful - not *really* necessary
	    if( !stream )
	        cout << "Write failed" << endl;

	    return 0;


}
