
#include <iostream>
#include "../src/bit_vector.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
	cout << "In the test file:" << endl;

	BitVector<int> vec;
	cout << "Size on creation: " << vec.size() << endl;

	vec.set(0, 1);
	cout << "After setting `0` to `1`: " << vec.get(0) << endl;

	return 0;
}
