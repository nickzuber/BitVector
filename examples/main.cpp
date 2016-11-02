
#include <iostream>
#include "../src/bit_vector.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
	cout << "In the test file:" << endl;

	BitVector<int> vec;
	cout << "Size on creation: " << vec.size() << endl;

	vec.set(0, true);
	cout << "After setting 0 to true: \n vect.get(0) => " << vec.get(0) << endl;

	return 0;
}
