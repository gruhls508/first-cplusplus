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
    string str {"Hello!"};
    for (char c : str)
    {
        std::cout << "[" << c << "]";
    }
    std::cout << '\n';
}
