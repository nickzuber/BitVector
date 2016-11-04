
#include <iostream>
#include "../src/bit_vector.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
	cout << "In the test file:" << endl;

	BitVector<int> vec;
	cout << "Size on creation: " << vec.size() << endl;

	vec.set(0, true);
	vec.set(30, true);

	cout << "vec.get(0) => " << vec[0] << endl;
	cout << "vec.get(30) => " << vec[30] << endl;
	
	cout << "vec.size() => " << vec.size() << endl;

	return 0;
}
