
#include <iostream>
#include "../src/bit_vector.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    BitVector<int> vec;
    
    cout << vec.capacity() << endl;
    
    return 0;
}
