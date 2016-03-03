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

int main(int argc, const char * argv[]) {
    int z;
    z = addition (5,3);
    cout << "The result is " << z << "\n";
}
