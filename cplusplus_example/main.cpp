//
//  main.cpp
//  cplusplus_example
//
//  Created by Glen Ruhl on 3/2/16.
//  Copyright © 2016 intradine. All rights reserved.
//

#include <iostream>
using namespace std;


int foo [] {165, 4, 5, 6322, 12, 567};
int n, result=0;

int main ()
{
    for ( n=0 ; n<6 ; ++n )
    {
        result += foo[n];
    }
    cout << result << '\n';
    return 0;
}
