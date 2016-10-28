
#include <iostream>
#include "../src/bit_vector.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    cout << "In the test file:" << endl;

    BitVector<int> vec = new BitVector<int>();
    cout << "Size on creation: " << vec.size() << endl;

		vec->resize(10);

    cout << "After resize to 10: " << vec.size() << endl;
 
    return 0;
}
