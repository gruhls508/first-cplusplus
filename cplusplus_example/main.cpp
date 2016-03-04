//
//  main.cpp
//  cplusplus_example
//
//  Created by Glen Ruhl on 3/2/16.
//  Copyright © 2016 intradine. All rights reserved.
//

#include <iostream>
using namespace std;


long factorial (long a)
{
    if (a > 1)
        return (a * factorial (a-1));
    else
        return 1;
}

int main ()
{
    long number = 9;
    cout << number << "! = " << factorial (number) << '\n';
    return 0;
}
