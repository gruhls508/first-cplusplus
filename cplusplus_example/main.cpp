//
//  main.cpp
//  cplusplus_example
//
//  Created by Glen Ruhl on 3/2/16.
//  Copyright © 2016 intradine. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    string mystr;
    cout << "What's your name? ";
    getline (cin, mystr);
    cout << "Hello " << mystr << ".\n";
    cout << "What is your favorite team? ";
    getline (cin, mystr);
    cout << "I like " << mystr << " too!\n";
    return 0;
}
