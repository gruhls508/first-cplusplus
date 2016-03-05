//
//  main.cpp
//  cplusplus_example
//
//  Created by Glen Ruhl on 3/2/16.
//  Copyright © 2016 intradine. All rights reserved.
//

#include <iostream>
using namespace std;


void printarray (int arg[], int length) {
    for (int n=0; n<length; ++n)
        cout << arg[n] << ' ';
    cout << '\n';
}

int main ()
{
    int firstarray[] = {6, 12, 18, 24, 30};
    int secondarray[] = {4, 8, 12, 16, 20, 24, 28};
    printarray (firstarray,5);
    printarray (secondarray,7);
    return 0;
}
