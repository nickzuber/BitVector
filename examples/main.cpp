
#include <iostream>
#include "../src/bit_vector.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
	cout << "In the test file:" << endl;

	BitVector<int> vec;
	cout << "Size on creation: " << vec.size() << endl;

	vec.set(0, true);
	// vec.set(1, false);
	// vec.set(2, true);

	for (int i = 0; i < vec.size(); ++i) {
		cout << "vec.get(" << i << ") => " << vec.get(i) << endl;
	}

	return 0;
}
