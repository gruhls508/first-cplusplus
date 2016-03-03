//
//  main.cpp
//  cplusplus_example
//
//  Created by Glen Ruhl on 3/2/16.
//  Copyright © 2016 intradine. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main(int argc, const char * argv[]) {
    string mystr;
    float price=0;
    int quantity=0;

    cout << "Enter price: ";
    getline (cin,mystr);
    stringstream(mystr) >> price;
    cout << "Enter quantity: ";
    getline (cin,mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price*quantity << endl;
    return 0;
}
