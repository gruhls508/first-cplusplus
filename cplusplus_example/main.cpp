//
//  main.cpp
//  cplusplus_example
//
//  Created by Glen Ruhl on 3/2/16.
//  Copyright © 2016 intradine. All rights reserved.
//

#include <iostream>
using namespace std;


int addition (int a, int b)
{
    int r;
    r=a+b;
    return r;
}


string concatenate (const string& a, const string& b)
{
    return a+b;
}


int main(int argc, const char * argv[]) {
    int z;
    z = addition (5,3);



    string a = "art";
    string b = " form";
    string c = concatenate(a, b);


    cout << "The (concatenate) result is " << c << "\n";
}
