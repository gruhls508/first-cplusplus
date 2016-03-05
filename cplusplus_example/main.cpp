//
//  main.cpp
//  cplusplus_example
//
//  Created by Glen Ruhl on 3/2/16.
//  Copyright © 2016 intradine. All rights reserved.
//

#include <iostream>
using namespace std;


namespace foo
{
    int value() { return 5; }
}

namespace bar
{
    const double pi = 3.1416;
    double value() { return 2*pi; }
}

int main () {
    cout << foo::value() << '\n';
    cout << bar::value() << '\n';
    cout << bar::pi << '\n';

    return 0;
}
