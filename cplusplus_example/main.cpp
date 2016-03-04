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


inline string concatenate (const string& a, const string& b)
{
    return a+b;
}

int divide (int a, int b=2)
{
    int r;
    r=a/b;
    return (r);
}

int main ()
{
    cout << divide (12) << '\n';
    cout << divide (20,4) << '\n';
    return 0;
}
