//
//  main.cpp
//  BitVector
//
//  Created by Nicolas Zuber on 9/5/16.
//  Copyright © 2016 Nicolas Zuber. All rights reserved.
//

#include <iostream>
#include "../src/bit_vector.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    BitVector<int> vec;
    
    char* arr;
    
    char temp[4];
    temp[0] = 'a';
    temp[1] = 'b';
    temp[2] = 'c';
    temp[3] = '\0';
    
    arr = temp;
    
    cout << arr << endl;
    
    return 0;
}
